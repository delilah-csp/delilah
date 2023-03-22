#ifndef DELILAH_NCURSES
#define DELILAH_NCURSES

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void ncurses_init();
void ncurses_end();
void ncurses_log_info(const char *msg);
void ncurses_log_warn(const char *msg);
void ncurses_log_error(const char *msg);
void ncurses_report_engine_ready(int engine_id);
void ncurses_report_engine_start(int engine_id);
void ncurses_report_engine_cache(int engine_id);
void ncurses_report_engine_cache_slots(int engine_id, int dslot, int pslot);
void ncurses_report_engine_stopped(int engine_id, int rc);
void refresh_engine_list();
void ncurses_draw();

#endif