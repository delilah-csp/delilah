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
  { "1kb", "/media/nvme/1kb.tmp" },     { "10kb", "/media/nvme/10kb.tmp" },
  { "100kb", "/media/nvme/100kb.tmp" }, { "1mb", "/media/nvme/1mb.tmp" },
  { "10mb", "/media/nvme/10mb.tmp" },   { "100mb", "/media/nvme/100mb.tmp" },
};

static char*
delilah_functions_map(char* in)
{
  for (int i = 0; i < 6; i++) {
    if (strcmp(in, files[i].in))
      return files[i].out;
  }

  return NULL;
}

#endif
