#ifndef DELILAH_FUNCTIONS_MAP
#define DELILAH_FUNCTIONS_MAP

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct delilah_map_t
{
  char in[128];
  char out[128];
};

static struct delilah_map_t files[6] = {
  { "1kb", "/media/nvme/100.txt" },     { "10kb", "/media/nvme/1000.txt" },
  { "100kb", "/media/nvme/10000.txt" }, { "1mb", "/media/nvme/100000.txt" },
  { "10mb", "/media/nvme/1000000.txt" },   { "100mb", "/media/nvme/10000000.txt" },
};

static char*
delilah_functions_map(char* in)
{
  for (int i = 0; i < 6; i++) {
    if (strcmp(in, files[i].in) == 0){
      return files[i].out;
    }
  }

  return NULL;
}

#endif
