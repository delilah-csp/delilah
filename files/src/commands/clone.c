#include "commands/commands.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "mem/mem.h"
#include "util/log.h"
#include "util/time.h"
#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

uint32_t check_bit(uint32_t value, uint32_t index) {
    return (value >> index) & 1;
}

uint64_t
delilah_command_clone(struct delilah_thread_t* thread,
                        struct hermes_cmd_req* req, struct hermes_cmd_res* res,
                        struct delilah_t* delilah)
{
    uint8_t src_slot = req->clone.src;
    uint32_t size = req->clone.len;
    uint32_t src_offset = req->clone.src_offset;
    uint32_t dst_offset = req->clone.dst_offset;

    if(src_slot > HERMES_DATA_SLOT_COUNT) {
        res->status = HERMES_STATUS_INVALID_DATA_SLOT;
        log_warn("Clone error: src_slot %d is invalid", src_slot);
        return -1;
    }

    delilah_mem_sync_get(1, src_slot, size, src_offset);

    for (uint8_t i = 0; i < sizeof(uint32_t) * 8; ++i) {
        if (!check_bit(req->clone.dst, i)) continue;

        if(i > HERMES_DATA_SLOT_COUNT) {
            res->status = HERMES_STATUS_INVALID_DATA_SLOT;
            log_warn("Clone error: dst_slot %d is invalid", src_slot);
            return -1;
        }

        log_debug("cloning from %d to %d, size %d, src_offset %d, dst_offset %d", src_slot, i, size, src_offset, dst_offset);

        delilah_mem_sync_get(1, i, size, dst_offset); // Must take token before copy
        delilah_mem_copy(src_slot, i, size, src_offset, dst_offset);
        delilah_mem_sync_set(1, i, size, dst_offset);
    }

    res->status = HERMES_STATUS_SUCCESS;
    return 0;
}
