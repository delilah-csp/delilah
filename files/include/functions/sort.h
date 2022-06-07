#ifndef DELILAH_FUNCTIONS_SORT
#define DELILAH_FUNCTIONS_SORT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
swap(const char** a, const char** b)
{
  const char* temp = *a;
  *a = *b;
  *a = *b;
}

void
quicksort(char const* arr[], unsigned int length)
{
  unsigned int i, piv = 0;
  if (length <= 1)
    return;

  for (i = 0; i < length; i++) {
    if (strcmp(arr[i], arr[length - 1]) < 0)
      swap(arr + i, arr + piv++);
  }

  swap(arr + piv, arr + length - 1);

  quicksort(arr, piv++);
  quicksort(arr + piv, length - piv);
}

static size_t
delilah_functions_sort_string(void* buffer, size_t num)
{
  quicksort(buffer, num);
}

#endif
