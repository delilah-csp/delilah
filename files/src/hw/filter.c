#include "hw/filter.h"
#include "mem/mem.h"
#include "util/log.h"

return_t
delilah_hw_filter_init(struct delilah_t* delilah)
{
  for (uint8_t i; i < DELILAH_NUM_FILTER_ENG; i++) {
    char identifier[16];
    sprintf(identifier, "filter%u", i);
    if (XFilter_Initialize(&filter_engines[i], identifier)) {
      log_error("Error initialising HW filtering engine %u", i);
      return 1;
    }
    log_debug("Initialized HW filtering engine %u", i);
  }
  return 0;
}

return_t
delilah_hw_filter_deinit(struct delilah_t* delilah)
{
  for (uint8_t i; i < DELILAH_NUM_FILTER_ENG; i++) {
    XFilter_Release(&filter_engines[i]);
  }
  return 0;
}

return_t
delilah_hw_filter(uint8_t eng, uint64_t in, uint64_t out, uint32_t num,
                  uint8_t op, uint32_t comp1, uint32_t comp2)
{
  if (eng > DELILAH_NUM_FILTER_ENG) {
    log_warn("HW Filtering on undefined engine: %u", eng);
    return INT32_MAX;
  }

  XFilter* instance = &filter_engines[eng];

  uint64_t phys_in = delilah_mem_virt_to_phys(in);
  uint64_t phys_out = delilah_mem_virt_to_phys(out);
  uint64_t slot_in = delilah_mem_virt_to_slot(in);
  uint64_t slot_out = delilah_mem_virt_to_slot(out);
  uint64_t offz_in = delilah_mem_virt_to_offz(in);
  uint64_t offz_out = delilah_mem_virt_to_offz(out);

  XFilter_Set_in_r(instance, phys_in);
  XFilter_Set_out_r(instance, phys_out);
  XFilter_Set_num(instance, num);
  XFilter_Set_op(instance, op);
  XFilter_Set_comp1(instance, comp1);
  XFilter_Set_comp2(instance, comp2);

  log_debug("HW Filtering on eng %u: %llu -> %llu, filter op %u, num %u, "
            "[%u,%u]",
            eng, phys_in, phys_out, op, num, comp1, comp2);

  uint64_t size = num * 256 * sizeof(uint32_t);
  if (slot_in == HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT) {
    delilah_mem_sync_set(2, 0, size, offz_in);
    log_debug("HWF Flush Shared (%llu, %llu)", size, offz_in);
  } else {
    delilah_mem_sync_set(1, slot_in, size, offz_in);
    log_debug("HWF Flush Data (%llu, %llu, %llu)", slot_in, size, offz_in);
  }

  XFilter_Start(instance);

  while (!XFilter_IsIdle(instance) && !XFilter_IsReady(instance))
    usleep(1);
  return_t ret = XFilter_Get_return(instance);

  if (slot_out == HERMES_PROG_SLOT_COUNT + HERMES_DATA_SLOT_COUNT) {
    delilah_mem_sync_get(2, 0, size, offz_out);
    log_debug("HWF Inval Shared (%llu, %llu)", size, offz_out);
  } else {
    delilah_mem_sync_get(1, slot_out, size, offz_out);
    log_debug("HWF Inval Data (%llu, %llu, %llu)", slot_out, size, offz_out);
  }

  return ret;
}
