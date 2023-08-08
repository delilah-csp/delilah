#ifndef DELILAH_FUNCTIONS_FILE
#define DELILAH_FUNCTIONS_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "util/log.h"

static size_t
delilah_functions_file_read(void* buffer, size_t size, char* filename)
{
  size_t i = 0;
  size_t fsize;
  char* buf = (char*)buffer;

  FILE* f = fopen(filename, "rb");

  fseek(f, 0, SEEK_END);
  fsize = ftell(f);
  fseek(f, 0, SEEK_SET); /* same as rewind(f); */

  fread(buf, 1, (fsize < size - 1) ? fsize : size - 1, f);
  fclose(f);

  buf[(fsize < size - 1) ? fsize : size] = 0;

  return (fsize < size - 1) ? fsize : size;
}

static size_t
delilah_functions_file_read_offset(void* buffer, size_t size, size_t offset,
                                   char* filename)
{
  size_t i = 0;
  size_t fsize;
  char* buf = (char*)buffer;
  FILE* f = fopen(filename, "rb");

  // Set the file position to the given offset
  if (fseek(f, offset, SEEK_SET) != 0) {
    fclose(f);
    return 0;
  }

  fseek(f, 0, SEEK_END);
  fsize = ftell(f);

  // Ensure the offset is within the file size
  if (offset > fsize) {
    fclose(f);
    return 0;
  }

  fseek(f, offset, SEEK_SET);
  size_t read_size = (fsize - offset < size - 1) ? fsize - offset : size - 1;
  size_t result = fread(buf, 1, read_size, f);
  fclose(f);

  buf[result] = 0;
  return result;
}

static size_t
delilah_functions_file_direct_read(void* buffer, size_t size,
                                   const char* filename)
{
  int fd = open(filename, O_RDONLY | O_DIRECT);
  if (fd == -1) {
    char* error = strerror(errno);
    log_warn("Failed to open %s: %s\n", filename, error);
    return 0;
  }

  ssize_t bytes_read = read(fd, buffer, size);
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
delilah_functions_file_direct_read_offset(void* buffer, size_t size,
                                          size_t offset, const char* filename)
{
  int fd = open(filename, O_RDONLY | O_DIRECT);
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

#endif
