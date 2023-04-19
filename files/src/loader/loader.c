#include <unistd.h>

#include "commands/commands.h"
#include "delilah.h"
#include "functions/index.h"
#include "hermes/command.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "irq/irq.h"
#include "loader/loader.h"
#include "util/errors.h"
#include "util/log.h"

void*
worker(void* p)
{
  struct delilah_thread_t* thread = p;
  short num_cmds = sizeof(commands) / sizeof(struct command_t);
  short opcode_ok = 0;

  while (!thread->delilah->exiting) {
    if (thread->ctrl->ehcmdexec != HERMES_CMD_START) {
      usleep(1);
      continue;
    }

    thread->ctrl->ehcmddone = HERMES_CMD_NOT_FINISHED;

//    log_info("Command received for engine %i (op: %p).", thread->engine,
//             thread->cmd->req.opcode);

    for (int i = 0; i < num_cmds; i++) {
      if (commands[i].opcode == thread->cmd->req.opcode) {
        commands[i].handler(thread, &thread->cmd->req, &thread->cmd->res,
                            thread->delilah);
        opcode_ok = 1;
        break;
      }
    }

    // Opcode unspported
    if (!opcode_ok)
      thread->cmd->res.status = HERMES_STATUS_INVALID_OPCODE;

    thread->ctrl->ehcmdexec = HERMES_CMD_STOP;
    thread->ctrl->ehcmddone = HERMES_CMD_FINISHED;
    thread->cmd->res.cid = thread->cmd->req.cid;
    opcode_ok = 0;

    delilah_irq_raise(thread->engine);
  }

  pthread_exit(NULL);
}

return_t
delilah_loader_configure(struct delilah_t* delilah)
{
  for (short i; i < HERMES_UBPF_ENGINES; i++) {
    delilah->engine[i] = ubpf_create();

    if (!delilah->engine[i])
      return DELILAH_ERRORS_LOADER_ALLOC;

    for (int j = 0; j < sizeof(registered_functions) / sizeof(struct ext_func);
         j++) {
      ubpf_register(delilah->engine[i], registered_functions[j].idx,
                    registered_functions[j].name, registered_functions[j].ref);
    }
  }

  return 0x0;
}

return_t
delilah_loader_start(struct delilah_t* delilah)
{
  for (short i = 0; i < HERMES_UBPF_ENGINES; i++) {
    delilah->threads[i].engine = i;
    delilah->threads[i].delilah = delilah;
    delilah->threads[i].cmd = &delilah->bar0->commands[i];
    delilah->threads[i].ctrl = &delilah->bar0->cmdctrl[i];

    pthread_create(&delilah->threads[i].thread_id, NULL, worker,
                   &delilah->threads[i]);

    // Set CPU affinity
    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    CPU_SET(i, &cpuset);
    int rc = pthread_setaffinity_np(delilah->threads[i].thread_id,
                                    sizeof(cpu_set_t), &cpuset);
    if (rc != 0) {
      log_warn("Error calling pthread_setaffinity_np %d on engine %i", rc, i);
    }
  }

  return 0x0;
}

return_t
delilah_loader_unload(struct delilah_t* delilah)
{
  for (short i = 0; i < HERMES_UBPF_ENGINES; i++) {
    pthread_join(delilah->threads[i].thread_id, NULL);
  }
}
