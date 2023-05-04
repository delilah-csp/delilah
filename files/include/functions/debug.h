#ifndef DELILAH_FUNCTIONS_DEBUG
#define DELILAH_FUNCTIONS_DEBUG

#include "util/time.h"
#include "util/units.h"
#include <stdio.h>
#include <stdlib.h>

#define LOCAL_MEMORY_SIZE 128 * MiB
#define TEST_SIZE (1000 * 1000 * 32) // 32 million acceses
#define S_TO_NS (1000 * 1000 * 1000)

typedef void (*memory_op)(volatile char*, size_t);

static void
seq_read(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[i % size];
  }
}

static void
seq_write(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[i % size] = 42;
  }
}

static void
rand_read(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[rand() % size];
  }
}

static void
rand_write(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[rand() % size] = 42;
  }
}

static void
seq_read_aligned(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(i % size) & ~(0xF)];
  }
}

static void
seq_write_aligned(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(i % size) & ~(0xF)] = 42;
  }
}

static void
rand_read_aligned(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(rand() % size) & ~(0xF)];
  }
}

static void
rand_write_aligned(volatile char* memory, size_t size)
{
  for (size_t i = 0; i < TEST_SIZE; i++) {
    memory[(rand() % size) & ~(0xF)] = 42;
  }
}

static void
access_memory(volatile char* memory, size_t size, memory_op op,
              const char* op_name, short is_rand, double rand_time)
{
  struct timeval start;
  double elapsed;

  start = clock_start();
  op(memory, size);
  elapsed = clock_end(start);

  printf(" --> %f\t\t| %s\n",
         (elapsed * S_TO_NS / TEST_SIZE) - (is_rand ? rand_time : 0), op_name);
}

static void
delilah_functions_debug_bench(void* ctx, size_t mem_size, void* shared,
                              size_t shared_size)
{
  const size_t local_memory_size = LOCAL_MEMORY_SIZE;
  char* local_memory = (char*)malloc(local_memory_size);

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

  printf("Local Memory\n");
  access_memory((volatile char*)local_memory, local_memory_size, seq_read,
                "Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, seq_write,
                "Sequential Write", 0, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, rand_read,
                "Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size, rand_write,
                "Random Write", 1, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size,
                seq_read_aligned, "Aligned Sequential Read", 0,
                rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size,
                seq_write_aligned, "Aligned Sequential Write", 0,
                rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size,
                rand_read_aligned, "Aligned Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)local_memory, local_memory_size,
                rand_write_aligned, "Aligned Random Write", 1,
                rand_elapsed_one);

  printf("\nD-slot\n");
  access_memory((volatile char*)ctx, mem_size, seq_read, "Sequential Read", 0,
                rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, seq_write, "Sequential Write", 0,
                rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, rand_read, "Random Read", 1,
                rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, rand_write, "Random Write", 1,
                rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, seq_read_aligned,
                "Aligned Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, seq_write_aligned,
                "Aligned Sequential Write", 0, rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, rand_read_aligned,
                "Aligned Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)ctx, mem_size, rand_write_aligned,
                "Aligned Random Write", 1, rand_elapsed_one);

  printf("\nS-slot\n");
  access_memory((volatile char*)shared, shared_size, seq_read,
                "Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, seq_write,
                "Sequential Write", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, rand_read, "Random Read",
                1, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, rand_write, "Random Write",
                1, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, seq_read_aligned,
                "Aligned Sequential Read", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, seq_write_aligned,
                "Aligned Sequential Write", 0, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, rand_read_aligned,
                "Aligned Random Read", 1, rand_elapsed_one);
  access_memory((volatile char*)shared, shared_size, rand_write_aligned,
                "Aligned Random Write", 1, rand_elapsed_one);

  free(local_memory);
}

#endif