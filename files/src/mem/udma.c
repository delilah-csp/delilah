#include "conf/hermes.h"
#include "delilah.h"
#include "mem/mem.h"
#include "util/errors.h"
#include "util/log.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>

static void* mmap_bar;
static void* mmap_data[HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT];

static int bar_fd;
static int data_fd[HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT];

static int sync_ps_fd[HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT];
static int sync_pl_fd[HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT];

return_t
delilah_mem_alloc_bar(struct delilah_t* delilah)
{
  if ((bar_fd = open("/dev/delilah_bar0", O_RDWR | O_SYNC)) != -1) {
    mmap_bar = mmap(NULL, HERMES_BAR0_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
                    bar_fd, 0);

    if (mmap_bar == NULL)
      return DELILAH_ERRORS_MEM_MMAP;

    delilah->bar0 = mmap_bar;

    return 0x0;
  }

  return DELILAH_ERRORS_MEM_DEV;
}

return_t
delilah_mem_alloc_data(struct delilah_t* delilah)
{
  for (int i = 0; i < (HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT); i++) {

    unsigned char pl_path[1024], ps_path[1024], buf_path[1024];
    if (i < HERMES_PROG_SLOT_COUNT) {
      sprintf(pl_path, "/sys/class/u-dma-buf/delilah_prog%d/sync_for_device",
              i);
      sprintf(ps_path, "/sys/class/u-dma-buf/delilah_prog%d/sync_for_cpu", i);
      sprintf(buf_path, "/dev/delilah_prog%d", i);
    } else {
      sprintf(pl_path, "/sys/class/u-dma-buf/delilah_data%d/sync_for_device",
              i - HERMES_PROG_SLOT_COUNT);
      sprintf(ps_path, "/sys/class/u-dma-buf/delilah_data%d/sync_for_cpu",
              i - HERMES_PROG_SLOT_COUNT);
      sprintf(buf_path, "/dev/delilah_data%d", i - HERMES_PROG_SLOT_COUNT);
    }

    if ((sync_pl_fd[i] = open(pl_path, O_WRONLY)) == -1) {
      log_error("Failed to open PL sync bit for buffer %d.", i);
      return DELILAH_ERRORS_UDMA_MAP;
    }

    if ((sync_ps_fd[i] = open(ps_path, O_WRONLY)) == -1) {
      log_error("Failed to open PL sync bit for buffer %d.", i);
      return DELILAH_ERRORS_UDMA_MAP;
    }

    if ((data_fd[i] = open(buf_path, O_RDWR)) != -1) {
      mmap_data[i] =
        mmap(NULL, i < HERMES_PROG_SLOT_COUNT ? HERMES_PROG_SLOT_SIZE
                                              : HERMES_DATA_SLOT_SIZE,
             PROT_READ | PROT_WRITE, MAP_SHARED, data_fd[i], 0);

      if (mmap_data[i] == NULL)
        return DELILAH_ERRORS_MEM_MMAP;

      if (i < HERMES_PROG_SLOT_COUNT)
        delilah->program[i] = mmap_data[i];
      else
        delilah->data[i - HERMES_PROG_SLOT_COUNT] = mmap_data[i];
    } else {
      return DELILAH_ERRORS_MEM_DEV;
    }
  }

  return 0x0;
}

void*
delilah_mem_get_bar()
{
  return mmap_bar;
}

void*
delilah_mem_get_data()
{
  return mmap_data;
}

return_t
delilah_mem_sync_get(uint8_t type, uint8_t id)
{
  unsigned char attr[1024];
  int one = 1;
  sprintf(attr, "%d", one);
  if (write(sync_ps_fd[type == 0 ? id : (id + HERMES_PROG_SLOT_COUNT)], attr,
            strlen(attr)) <= 0) {
    log_error("Failed to invalidate PS cache");
  }
}

return_t
delilah_mem_sync_set(uint8_t type, uint8_t id)
{
  unsigned char attr[1024];
  int one = 1;
  sprintf(attr, "%d", one);
  if (write(sync_pl_fd[type == 0 ? id : (id + HERMES_PROG_SLOT_COUNT)], attr,
            strlen(attr)) <= 0) {
    log_error("Failed to invalidate PL cache");
  }
}

return_t
delilah_mem_unalloc_bar()
{
  close(bar_fd);
  munmap(mmap_bar, HERMES_BAR0_SIZE);
}

return_t
delilah_mem_unalloc_data()
{
  for (int i = 0; i < (HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT); i++) {
    close(sync_ps_fd[i]);
    close(sync_pl_fd[i]);
    close(data_fd[i]);
    munmap(mmap_data[i], i < HERMES_PROG_SLOT_COUNT ? HERMES_PROG_SLOT_SIZE
                                                    : HERMES_DATA_SLOT_SIZE);
  }
}