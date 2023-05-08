#ifndef DELILAH_FUNCTIONS_DEBUG
#define DELILAH_FUNCTIONS_DEBUG

#include "util/time.h"
#include "util/units.h"
#include <stdio.h>
#include <stdlib.h>

#define LOCAL_MEMORY_SIZE 128 * MiB
#define TEST_SIZE (1000 * 1000 * 32) // 32 million acceses
#define S_TO_NS (1000 * 1000 * 1000)

typedef void (*memory_op)(volatile char*, size_t, short);

static void
seq_read(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[i & mask];
  }
}

static void
seq_write(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[i & mask] = 42;
  }
}

static void
rand_read(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[rand() & mask];
  }
}

static void
rand_write(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[rand() & mask] = 42;
  }
}

static void
seq_read_aligned(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(i & mask) & ~(0xF)]; // 16 byte alignment
  }
}

static void
seq_write_aligned(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(i & mask) & ~(0xF)] = 42; // 16 byte alignment
  }
}

static void
rand_read_aligned(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(rand() & mask) & ~(alignment)]; // 16 byte alignment
  }
}

static void
rand_write_aligned(volatile char* memory, size_t size, short alignment)
{
  const size_t mask = size - 1;
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(rand() & mask) & ~(alignment)] = 42; // 16 byte alignment
  }
}

static void
access_memory(volatile char* memory, size_t size, short alignment, memory_op op,
              const char* op_name, short is_rand, double rand_time)
{
  struct timeval start;
  double elapsed;

  start = clock_start();
  op(memory, size, alignment);
  elapsed = clock_end(start);

  printf(",%f", (elapsed * S_TO_NS / TEST_SIZE) - (is_rand ? rand_time : 0));
}

static void
delilah_functions_debug_bench(void* ctx, size_t mem_size, void* shared,
                              size_t shared_size)
{
  const size_t local_memory_size = LOCAL_MEMORY_SIZE;
  char* local_memory = (char*)malloc(local_memory_size);
  const short alignments[] = { 16, 32, 64, 128, 256, 512, 1024, 2048, 4096 };

  double rand_elapsed_one;
  {
    struct timeval start;
    double elapsed;
    // Calculate how much time it takes to generate a random number
    start = clock_start();
    for (size_t i = 0; i < 100000000; i++) {
      rand();
    }
    elapsed = clock_end(start);
    rand_elapsed_one = elapsed * S_TO_NS / 100000000;
    printf(
      "Random number generation\n --> %f s in total\n --> %f ns per call\n\n",
      elapsed, rand_elapsed_one);
  }

  // check if local memory is allocated and if it is a power of 2
  if (local_memory_size <= 0 || local_memory == NULL ||
      (local_memory_size & (local_memory_size - 1)) != 0) {
    printf("Local memory size must be a power of 2 and greater than 0\n");
    return;
  }

  if (mem_size <= 0 || (mem_size & (mem_size - 1)) != 0) {
    printf("Memory size must be a power of 2 and greater than 0\n");
    return;
  }

  if (shared_size <= 0 || (shared_size & (shared_size - 1)) != 0) {
    printf("Shared memory size must be a power of 2 and greater than 0\n");
    return;
  }

  printf("X, Sequential Read, Sequential Write, Random Read, Random Write, "
         "Aligned Sequential Read, Aligned Sequential Write");

  for (size_t i = 0; i < 9; i++) {
    printf(", Aligned Random Read (%d B)", alignments[i]);
    printf(", Aligned Random Write (%d B)", alignments[i]);
  }

  printf("\nLocal Memory");

  access_memory((volatile char*)local_memory, local_memory_size, 1, seq_read,
                "Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, 1, seq_write,
                "Sequential Write", 0, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, 16, rand_read,
                "Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, 16, rand_write,
                "Random Write", 1, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, 1,
                seq_read_aligned, "Aligned Sequential Read", 0,
                rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, 1,
                seq_write_aligned, "Aligned Sequential Write", 0,
                rand_elapsed_one);
  for (size_t i = 0; i < 9; i++) {
    access_memory((volatile char*)local_memory, local_memory_size,
                  alignments[i], rand_read_aligned, "Aligned Random Read", 1,
                  rand_elapsed_one);
    access_memory((volatile char*)local_memory, local_memory_size,
                  alignments[i], rand_write_aligned, "Aligned Random Write", 1,
                  rand_elapsed_one);
  }

  printf("\nD-slot");
  access_memory((volatile char*)ctx, mem_size, 1, seq_read, "Sequential Read",
                0, rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, 1, seq_write, "Sequential Write",
                0, rand_elapsed_one);

  access_memory((volatile char*)ctx, mem_size, 16, rand_read, "Random Read", 1,
                rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, 16, rand_write, "Random Write",
                1, rand_elapsed_one);

  access_memory((volatile char*)ctx, mem_size, 1, seq_read_aligned,
                "Aligned Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, 1, seq_write_aligned,
                "Aligned Sequential Write", 0, rand_elapsed_one);
  for (size_t i = 0; i < 9; i++) {
    access_memory((volatile char*)ctx, mem_size, alignments[i],
                  rand_read_aligned, "Aligned Random Read", 1,
                  rand_elapsed_one);
    access_memory((volatile char*)ctx, mem_size, alignments[i],
                  rand_write_aligned, "Aligned Random Write", 1,
                  rand_elapsed_one);
  }

  printf("\nS-slot");
  access_memory((volatile char*)shared, shared_size, 1, seq_read,
                "Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, 1, seq_write,
                "Sequential Write", 0, rand_elapsed_one);

  access_memory((volatile char*)shared, shared_size, 16, rand_read,
                "Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, 16, rand_write,
                "Random Write", 1, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, 1, seq_read_aligned,
                "Aligned Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, 1, seq_write_aligned,
                "Aligned Sequential Write", 0, rand_elapsed_one);
  for (size_t i = 0; i < 9; i++) {
    access_memory((volatile char*)shared, shared_size, alignments[i],
                  rand_read_aligned, "Aligned Random Read", 1,
                  rand_elapsed_one);
    access_memory((volatile char*)shared, shared_size, alignments[i],
                  rand_write_aligned, "Aligned Random Write", 1,
                  rand_elapsed_one);
  }

  printf("\n");

  free(local_memory);
}

#endif