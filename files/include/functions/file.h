#ifndef DELILAH_FUNCTIONS_FILE
#define DELILAH_FUNCTIONS_FILE

#include <stdio.h>
#include <stdlib.h>

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

#endif
