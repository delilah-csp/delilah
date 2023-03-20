#include "conf/hermes.h"
#include "delilah.h"
#include "hermes/config.h"
#include "irq/irq.h"
#include "util/errors.h"
#include "util/log.h"
#include "util/time.h"
#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#define GPIO_REQ_ADDR 0x80000000
#define GPIO_REQ_SIZE 0x1000

int fd;
uint8_t* gpio_req;
pthread_mutex_t gpio_mutex;

struct irq_thread_t
{
  uint8_t id;
  uint8_t raised;
  pthread_t thread_id;
  pthread_mutex_t mutex;
  pthread_cond_t cond;
  struct delilah_t* delilah;
};

static struct irq_thread_t threads[HERMES_UBPF_ENGINES];

return_t
delilah_irq_raise(uint8_t engine)
{
  pthread_mutex_lock(&threads[engine].mutex);
  threads[engine].raised = 1;
  pthread_cond_signal(&threads[engine].cond);
  pthread_mutex_unlock(&threads[engine].mutex);
}

void
set_irq_bit(uint8_t* num, int eng)
{
  pthread_mutex_lock(&gpio_mutex);
  *num |= (1 << eng);
  pthread_mutex_unlock(&gpio_mutex);
}

void
clear_irq_bit(uint8_t* num, int eng)
{
  pthread_mutex_lock(&gpio_mutex);
  *num &= ~(1 << eng);
  pthread_mutex_unlock(&gpio_mutex);
}

void*
handle_irq_signals(void* arg)
{
  struct irq_thread_t* thread = arg;
  double elapsed;

  while (1) {
    pthread_mutex_lock(&thread->mutex);
    while (!thread->raised)
      pthread_cond_wait(&thread->cond, &thread->mutex);

    thread->raised = 0;

    if (thread->delilah->exiting)
      pthread_exit(NULL);

    struct timeval start = clock_start();

    set_irq_bit(gpio_req, thread->id);

    // See Figure 4 in PG195.
    // The IRQ handshake requires the driver to notice two short assertions on
    // the ACK pin before deasserting the REQ pin. This is impossible to detect
    // reliably with the current hardware setup (GPIO cannot detect such short
    // pulses seemingly). Alternatively, we could wait until the host has
    // acknowledged the IRQ by updating a register in the BAR0. However, this
    // could cause the device to hang if the host isn't responding (e.g. due to
    // a bug in the driver, or program crashes). Therefore, we simply wait for a
    // fixed amount of time. This is not ideal, but it should work for now.

    usleep(10); // 10 us is enough for the PCIe driver to notice the IRQ

    clear_irq_bit(gpio_req, thread->id);

    elapsed = clock_end(start);
    log_debug(" => (%i) IRQ %lf s", thread->id, elapsed);

    pthread_mutex_unlock(&thread->mutex);
  }
}

return_t
delilah_irq_configure(struct delilah_t* delilah)
{
  // Synchrnously mmap the GPIO registers
  fd = open("/dev/mem", O_RDWR | O_SYNC);

  if (fd < 0) {
    log_error("Failed to open /dev/mem");
    return DELILAH_ERRORS_IRQ_GPIO_FD;
  }

  gpio_req = (uint8_t*)mmap(NULL, GPIO_REQ_SIZE, PROT_READ | PROT_WRITE,
                            MAP_SHARED, fd, GPIO_REQ_ADDR);

  pthread_mutex_init(&gpio_mutex, NULL);

  for (int i = 0; i < HERMES_UBPF_ENGINES; i++) {
    threads[i].id = i;
    threads[i].delilah = delilah;

    pthread_mutex_init(&threads[i].mutex, NULL);
    pthread_cond_init(&threads[i].cond, NULL);

    pthread_create(&threads[i].thread_id, NULL, handle_irq_signals,
                   &threads[i]);
  }

  return 0x0;
}

return_t
delilah_irq_close(struct delilah_t* delilah)
{
  for (int i = 0; i < HERMES_UBPF_ENGINES; i++) {
    delilah_irq_raise(i);
    pthread_join(threads[i].thread_id, NULL);
    munmap(gpio_req, GPIO_REQ_SIZE);
    close(fd);
  }
}