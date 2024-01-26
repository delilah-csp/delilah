#include "hw/filter.h"
#include "mem/mem.h"
#include "util/log.h"

return_t
delilah_hw_filter(uint64_t in, uint64_t out, uint64_t num, uint64_t op,
                  uint64_t comp1, uint64_t comp2)
{
  XFilter* instance = malloc(sizeof(XFilter));
  XFilter_Initialize(instance, "filterdev");

  uint64_t phys_in = delilah_mem_virt_to_phys(in);
  uint64_t phys_out = delilah_mem_virt_to_phys(out);

  XFilter_Set_in_value(instance, phys_in);
  XFilter_Set_out_r(instance, phys_out);
  XFilter_Set_num(instance, num);
  XFilter_Set_op(instance, op);
  XFilter_Set_comp1(instance, comp1);
  XFilter_Set_comp2(instance, comp2);

  log_debug("HW Filtering: %lld -> %lld, filter op %lld, num %lld, [%lld,%lld]",
            phys_in, phys_out, op, num, comp1, comp2);

  //delilah_mem_sync_set(1, delilah_mem_virt_to_slot(in), 0, 0);
  XFilter_Start(instance);

  while (!XFilter_IsDone(instance) && !XFilter_IsIdle(instance))
    usleep(1);
  return_t ret = XFilter_Get_return(instance);

  //delilah_mem_sync_get(1, delilah_mem_virt_to_slot(out), 0, 0);

  XFilter_Release(instance);
  free(instance);

  return ret;
}

return_t
delilah_hw_filter_join(struct delilah_t* delilah)
{
  // TODO
}
