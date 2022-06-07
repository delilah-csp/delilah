#ifndef DELILAH_FUNCTIONS_VERSION
#define DELILAH_FUNCTIONS_VERSION

#include "conf/version.h"

static uint8_t
delilah_functions_version_major()
{
  return DELILAH_VERSION_MAJOR;
}

static uint8_t
delilah_functions_version_minor()
{
  return DELILAH_VERSION_MINOR;
}

static uint8_t
delilah_functions_version_build()
{
  return DELILAH_VERSION_BUILD;
}

#endif
