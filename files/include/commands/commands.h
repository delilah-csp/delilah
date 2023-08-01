#ifndef DELILAH_COMMANDS_COMMANDS
#define DELILAH_COMMANDS_COMMANDS

#include "delilah.h"
#include "hermes/command.h"
#include "hermes/opcodes.h"
#include "loader/loader.h"

typedef uint64_t handler_t(struct delilah_thread_t* thread,
                           struct hermes_cmd_req* req,
                           struct hermes_cmd_res* res,
                           struct delilah_t* delilah);

struct command_t
{
  uint64_t opcode;
  handler_t* handler;
};

handler_t delilah_command_execute;
handler_t delilah_command_execute_jit;
handler_t delilah_command_clear_cache;

static struct command_t commands[] = {
  { HERMES_OPCODE_EXECUTE_SLOT, &delilah_command_execute },
  { HERMES_OPCODE_EXECUTE_SLOT_JIT, &delilah_command_execute_jit },
  { DELILAH_OPCODE_CLEAR_CACHE, &delilah_command_clear_cache }
};

#endif
