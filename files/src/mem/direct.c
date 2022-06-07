#ifdef DELILAH_USE_DIRECT

#include "delilah.h"
#include "mem/mem.h"
#include "util/errors.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>

static void* mmap_bar;
static void* mmap_data;

static size_t phys_bar;
static size_t phys_data;

static size_t bar_size;
static size_t data_size;

static int bar_fd;
static int data_fd;

return_t
delilah_mem_alloc_bar(size_t phys, size_t size)
{
  bar_size = size;
  phys_bar = phys;

  if ((bar_fd = open("/dev/mem", O_RDWR | O_SYNC)) != -1) {
    mmap_bar =
      mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, bar_fd, phys);

    if (mmap_bar == NULL)
      return DELILAH_ERRORS_MEM_MMAP;

    ftruncate(bar_fd, size);

    return 0x0;
  }

  return DELILAH_ERRORS_MEM_DEV;
}

return_t
delilah_mem_alloc_data(size_t phys, size_t size)
{
  data_size = size;
  phys_data = phys;

  if ((data_fd = open("/dev/mem", O_RDWR | O_SYNC)) != -1) {
    mmap_data =
      mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, data_fd, phys);

    if (mmap_data == NULL)
      return DELILAH_ERRORS_MEM_MMAP;

    ftruncate(data_fd, size);

    return 0x0;
  }

  return DELILAH_ERRORS_MEM_DEV;
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
  //
}

return_t
delilah_mem_sync_set(uint8_t type, uint8_t id)
{
  //
}

return_t
delilah_mem_unalloc_bar()
{
  close(bar_fd);
  munmap(mmap_bar, bar_size);
}

return_t
delilah_mem_unalloc_data()
{
  close(data_fd);
  munmap(mmap_data, bar_size);
}

#endif
