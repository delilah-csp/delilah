#include "conf/hermes.h"
#include "delilah.h"
#include "irq/irq.h"
#include "util/errors.h"
#include "util/log.h"
#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define DELILAH_GPIO_BASE_OUT 504

#define GPIO_ROOT "/sys/class/gpio"
#define GPIO_EXPORT "/sys/class/gpio/export"

struct gpio_t
{
  int dir_fd;
  int val_fd;
};

int export_fd;
static struct gpio_t gpio[HERMES_UBPF_ENGINES];

struct irq_thread_t
{
  uint8_t id;
  uint8_t raised;
  struct gpio_t* out;
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

void*
handle_irq_signals(void* arg)
{
  struct irq_thread_t* thread = arg;
  char high[2] = { '1', '\0' };
  char low[2] = { '0', '\0' };

  while (1) {
    pthread_mutex_lock(&thread->mutex);
    while (!thread->raised)
      pthread_cond_wait(&thread->cond, &thread->mutex);

    thread->raised = 0;

    if (thread->delilah->exiting)
      pthread_exit(NULL);

    // Set GPIO high to signal IRQ to the host
    write(thread->out->val_fd, high, 2);
    fsync(thread->out->val_fd);

    // Wait for host to acknowledge IRQ
    volatile uint8_t *ack = &thread->delilah->bar0->cmdctrl[thread->id].ehcmdack;
    while(true)
    {
      if(*ack == 1) break;
      usleep(1);
    }

    // Clear the ack bit
    *ack = 0;

    // Set GPIO low to signal IRQ is handled
    write(thread->out->val_fd, low, 2);
    fsync(thread->out->val_fd);

    pthread_mutex_unlock(&thread->mutex);
  }
}

return_t
delilah_irq_configure(struct delilah_t* delilah)
{
  char channel_str[5];
  char gpio_dir_file[128];
  char gpio_val_file[128];

  char out[4] = { 'o', 'u', 't', '\0' };

  // Open the GPIO export file to export the interrupt pints to userspace
  export_fd = open(GPIO_EXPORT, O_WRONLY | O_SYNC);

  if (export_fd < 0)
    return DELILAH_ERRORS_IRQ_GPIO_FD;

  // Start at the base (500) and iterate for the number of engines
  for (int i = DELILAH_GPIO_BASE_OUT; i <  DELILAH_GPIO_BASE_OUT + HERMES_UBPF_ENGINES; i++) {
    // Export the GPIO to userspace
    sprintf(channel_str, "%d", i);
    write(export_fd, channel_str, (strlen(channel_str) + 1));

    // Determine the name of the direction and value files for the GPIO
    sprintf(gpio_dir_file, "%s/gpio%d/direction", GPIO_ROOT, i);
    sprintf(gpio_val_file, "%s/gpio%d/value", GPIO_ROOT, i);

    // Open the direction and value files for the GPIO
    gpio[i].dir_fd = open(gpio_dir_file, O_RDWR | O_SYNC);
    gpio[i].val_fd = open(gpio_val_file, O_WRONLY | O_SYNC);

    // Check if the files were opened successfully
    if (gpio[i].dir_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;
    if (gpio[i].val_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;

    // Write the direction to the GPIO (out)
    write(gpio[i].dir_fd, out, 4);
  }

  // For each engine, create a thread to handle IRQs
  for (int i = 0; i < HERMES_UBPF_ENGINES; i++) {
    threads[i].id = i;
    threads[i].out = &gpio[HERMES_UBPF_ENGINES];
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
  }
}