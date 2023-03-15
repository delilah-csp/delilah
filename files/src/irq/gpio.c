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

#define DELILAH_GPIO_PAIRS 4
#define DELILAH_GPIO_BASE_IN 500
#define DELILAH_GPIO_BASE_OUT 504

#if DELILAH_GPIO_PAIRS != HERMES_UBPF_ENGINES
#error "Number of GPIOs must be the same as uBPF engines"
#endif

#define GPIO_ROOT "/sys/class/gpio"
#define GPIO_EXPORT "/sys/class/gpio/export"

struct gpio_t
{
  int dir_fd;
  int val_fd;
};

int export_fd;
static struct gpio_t gpio[DELILAH_GPIO_PAIRS * 2];

struct irq_thread_t
{
  uint8_t id;
  uint8_t raised;
  struct gpio_t* in;
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

    // IRQ triggering is done by toggling the REQ GPIO
    // The correct solution would be to use the ACK GPIO to identify when the
    // host have serviced the IRQ However, the ACK GPIO is not always acting as
    // expected, so we use a timeout instead This makes me sad, but it works
    write(thread->out->val_fd, high, 2);
    fsync(thread->out->val_fd);

    // High enough to trigger the IRQ, but low enough to not cause critical
    // timing issues
    usleep(10);

    // Clear the REQ GPIO
    write(thread->out->val_fd, low, 2);
    fsync(thread->out->val_fd);

    // High enough to trigger the IRQ, but low enough to not cause critical
    // timing issues
    usleep(10);

    pthread_mutex_unlock(&thread->mutex);
  }
}

return_t
delilah_irq_configure(struct delilah_t* delilah)
{
  char channel_str[5];
  char gpio_dir_file[128];
  char gpio_val_file[128];
  int j = 0;

  char in[3] = { 'i', 'n', '\0' };
  char out[4] = { 'o', 'u', 't', '\0' };

  export_fd = open(GPIO_EXPORT, O_WRONLY | O_SYNC);
  if (export_fd < 0)
    return DELILAH_ERRORS_IRQ_GPIO_FD;

  for (int i = DELILAH_GPIO_BASE_IN;
       i < DELILAH_GPIO_BASE_IN + DELILAH_GPIO_PAIRS; i++) {
    sprintf(channel_str, "%d", i);
    write(export_fd, channel_str, (strlen(channel_str) + 1));

    sprintf(gpio_dir_file, "%s/gpio%d/direction", GPIO_ROOT, i);
    sprintf(gpio_val_file, "%s/gpio%d/value", GPIO_ROOT, i);

    gpio[j].dir_fd = open(gpio_dir_file, O_RDWR | O_SYNC);
    gpio[j].val_fd = open(gpio_val_file, O_RDONLY | O_SYNC);

    if (gpio[j].dir_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;
    if (gpio[j].val_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;

    write(gpio[j].dir_fd, in, 3);
    j++;
  }

  for (int i = DELILAH_GPIO_BASE_OUT;
       i < DELILAH_GPIO_BASE_OUT + DELILAH_GPIO_PAIRS; i++) {
    sprintf(channel_str, "%d", i);
    write(export_fd, channel_str, (strlen(channel_str) + 1));

    sprintf(gpio_dir_file, "%s/gpio%d/direction", GPIO_ROOT, i);
    sprintf(gpio_val_file, "%s/gpio%d/value", GPIO_ROOT, i);

    gpio[j].dir_fd = open(gpio_dir_file, O_RDWR | O_SYNC);
    gpio[j].val_fd = open(gpio_val_file, O_WRONLY | O_SYNC);

    if (gpio[j].dir_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;
    if (gpio[j].val_fd < 0)
      return DELILAH_ERRORS_IRQ_GPIO_FD;

    write(gpio[j].dir_fd, out, 4);
    j++;
  }

  for (int i = 0; i < HERMES_UBPF_ENGINES; i++) {
    threads[i].id = 0;
    threads[i].in = &gpio[i];
    threads[i].out = &gpio[i + HERMES_UBPF_ENGINES];
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