#ifndef DELILAH_MEM_MEM
#define DELILAH_MEM_MEM

#include "delilah.h"
#include <stddef.h>
#include <stdint.h>

return_t delilah_mem_alloc_bar(struct delilah_t* delilah);
return_t delilah_mem_alloc_data(struct delilah_t* delilah);
return_t delilah_mem_alloc_shared(struct delilah_t* delilah);

return_t delilah_mem_sync_get(uint8_t type, uint8_t id, uint32_t size,
                              uint32_t offset);
return_t delilah_mem_sync_set(uint8_t type, uint8_t id, uint32_t size,
                              uint32_t offset);

return_t delilah_mem_unalloc_bar();
return_t delilah_mem_unalloc_data();
return_t delilah_mem_unalloc_shared(struct delilah_t* delilah);

return_t delilah_mem_copy(uint8_t src, uint8_t dst, uint32_t size,
                          uint32_t src_offset, uint32_t dst_offset);

uint64_t delilah_mem_virt_to_phys(uint64_t virt);
uint64_t delilah_mem_virt_to_slot(uint64_t virt);
uint64_t delilah_mem_virt_to_offz(uint64_t virt);
#endif
