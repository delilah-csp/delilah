#ifndef DELILAH_FUNCTIONS_FILE
#define DELILAH_FUNCTIONS_FILE

#include "util/log.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

static size_t
_delilah_functions_file_read(void* buffer, size_t size, size_t offset,
                             char* filename, int flags)
{
  int fd = open(filename, O_RDONLY | flags);
  if (fd == -1) {
    char* error = strerror(errno);
    log_warn("Failed to open %s: %s\n", filename, error);
    return 0;
  }

  off_t file_size = lseek(fd, 0, SEEK_END);
  off_t new_offset = (offset < file_size) ? offset : file_size;

  ssize_t bytes_read = pread(fd, buffer, size, new_offset);
  if (bytes_read == -1) {
    char* error = strerror(errno);
    log_warn("Failed to read %s: %s\n", filename, error);
    close(fd);
    return 0;
  }

  close(fd);
  return bytes_read;
}

static size_t
delilah_functions_file_read(void* buffer, size_t size, char* filename)
{
  return _delilah_functions_file_read(buffer, size, 0, filename, 0);
}

static size_t
delilah_functions_file_read_offset(void* buffer, size_t size, size_t offset,
                                   char* filename)
{
  return _delilah_functions_file_read(buffer, size, offset, filename, 0);
}

static size_t
delilah_functions_file_direct_read(void* buffer, size_t size,
                                   const char* filename)
{
  // We must PAGE align (4096) for direct reads
  return _delilah_functions_file_read(buffer, size - (size % 4096), 0, filename,
                                      O_DIRECT);
}

static size_t
delilah_functions_file_direct_read_offset(void* buffer, size_t size,
                                          size_t offset, const char* filename)
{
  // We must PAGE align (4096) for direct reads
  return _delilah_functions_file_read(buffer, size - (size % 4096), offset,
                                      filename, O_DIRECT);
}

static size_t
delilah_functions_file_indirect_read(void* buffer, size_t size,
                                     const char* filename, int copy)
{
  // We must PAGE align (4096) for direct reads
  void* align = aligned_alloc(4096, size);
  size_t br = _delilah_functions_file_read(align, size - (size % 4096), 0,
                                           filename, O_DIRECT);
  if (copy)
    memcpy(buffer, align, size);
  free(align);
  return br;
}

static size_t
delilah_functions_file_indirect_read_offset(void* buffer, size_t size,
                                            size_t offset, const char* filename,
                                            int copy)
{
  // We must PAGE align (4096) for direct reads
  void* align = aligned_alloc(4096, size);
  size_t br = _delilah_functions_file_read(align, size - (size % 4096), offset,
                                           filename, O_DIRECT);
  if (copy)
    memcpy(buffer, align, size);
  free(align);
  return br;
}

#endif
