#ifndef DELILAH_MEM_MEM
#define DELILAH_MEM_MEM

#include "delilah.h"
#include <stddef.h>
#include <stdint.h>

return_t delilah_mem_alloc_bar(size_t phys, size_t size);
return_t delilah_mem_alloc_data(size_t phys, size_t size);

void* delilah_mem_get_bar();
void* delilah_mem_get_data();

return_t delilah_mem_sync_get(uint8_t type, uint8_t id);
return_t delilah_mem_sync_set(uint8_t type, uint8_t id);

return_t delilah_mem_unalloc_bar();
return_t delilah_mem_unalloc_data();

#endif
