#ifndef DELILAH_IRQ_IRQ
#define DELILAH_IRQ_IRQ

#include "delilah.h"

return_t delilah_irq_configure(struct delilah_t* delilah);
return_t delilah_irq_close(struct delilah_t* delilah);
return_t delilah_irq_raise(uint8_t id);

#endif
