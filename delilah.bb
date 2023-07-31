SUMMARY = "Simple test application"
SECTION = "PETALINUX/apps"
LICENSE = "CLOSED"

SRC_URI = "file://CMakeLists.txt \
           file://include/delilah.h \
           file://include/commands/commands.h \
           file://include/conf/conf.h \
           file://include/conf/hermes.h \
           file://include/conf/version.h \
           file://include/functions/cpu.h \
           file://include/functions/debug.h \
           file://include/functions/file.h \
           file://include/functions/fs.h \
           file://include/functions/index.h \
           file://include/functions/version.h \
           file://include/hermes/command.h \
           file://include/hermes/config.h \
           file://include/hermes/configure.h \
           file://include/hermes/opcodes.h \
           file://include/hermes/status.h \
           file://include/irq/irq.h \
           file://include/loader/loader.h \
           file://include/mem/mem.h \
           file://include/util/errors.h \
           file://include/util/log.h \
           file://include/util/time.h \
           file://include/util/units.h \
           file://src/delilah.c \
           file://src/commands/clear_cache.c \
           file://src/commands/clone.c \
           file://src/commands/execute.c \
           file://src/commands/execute_jit.c \
           file://src/hermes/configure.c \
           file://src/irq/gpio.c \
           file://src/loader/loader.c \
           file://src/mem/udma.c \
           file://src/util/log.c \
           file://ubpf/* \
           file://.profile \
          "

S = "${WORKDIR}"

inherit pkgconfig cmake

FILES_${PN} += "/home/root/.profile"