#include "delilah.h"
#include "util/ncurses.h"

static int engine_status[HERMES_UBPF_ENGINES] = {};
static int engine_dslot[HERMES_UBPF_ENGINES] = {};
static int engine_pslot[HERMES_UBPF_ENGINES] = {};
static int engine_rc[HERMES_UBPF_ENGINES] = {};

int log_num_entries = 1;

static WINDOW *left_box;
static WINDOW *left_box_bottom;
static WINDOW *right_box;

void ncurses_init() {
  for (size_t i = 0; i < HERMES_UBPF_ENGINES; i++) {
    engine_dslot[i] = -1;
    engine_pslot[i] = -1;
    engine_rc[i] = -1;
  }
}

void ncurses_log(const char *msg, short color) {
  time_t tm;
  time(&tm);
  char *ctime_no_newline = strtok(ctime(&tm), "\n");

  // Move the cursor to the end of the scroll view and write the message
  wmove(right_box, log_num_entries, 1);

  // Set the color and write the message
  wattron(right_box, COLOR_PAIR(color));
  wprintw(right_box, " [%s]: %s", ctime_no_newline, msg);
  wattroff(right_box, COLOR_PAIR(color));

  // Increment the number of log entries and ensure that we don't exceed the
  // maximum number of rows in the scroll view
  log_num_entries++;
  if (log_num_entries >= getmaxy(right_box)) {
    log_num_entries = getmaxy(right_box) - 1;
  }

  // Refresh the scroll view to update the screen
  box(right_box, 0, 0);
  wrefresh(right_box);
}

void ncurses_exec_log() {
  // Move the cursor to the end of the scroll view and write the message
  wmove(left_box_bottom, log_num_entries, 1);

  // Set the color and write the message
  wprintw(left_box_bottom, "");

  // Increment the number of log entries and ensure that we don't exceed the
  // maximum number of rows in the scroll view
  log_num_entries++;
  if (log_num_entries >= getmaxy(left_box_bottom)) {
    log_num_entries = getmaxy(left_box_bottom) - 1;
  }

  // Refresh the scroll view to update the screen
  box(left_box_bottom, 0, 0);
  wrefresh(left_box_bottom);
}

void ncurses_log_info(const char *msg) {
  ncurses_log(msg, 0); // Use color pair 0 for info messages
}

void ncurses_log_warn(const char *msg) {
  ncurses_log(msg, 4); // Use color pair 4 for warning messages
}

void ncurses_log_error(const char *msg) {
  ncurses_log(msg, 5); // Use color pair 5 for error messages
}

void ncurses_report_engine_ready(int engine_id) {
  engine_status[engine_id] = 0;

  refresh_engine_list();
}

void ncurses_report_engine_start(int engine_id) {
  engine_status[engine_id] = 1;

  refresh_engine_list();
}

void ncurses_report_engine_cache(int engine_id) {
  engine_status[engine_id] = 2;

  refresh_engine_list();
}

void ncurses_report_engine_cache_slots(int engine_id, int dslot, int pslot) {
  engine_status[engine_id] = 2;
  engine_dslot[engine_id] = dslot;
  engine_pslot[engine_id] = pslot;

  refresh_engine_list();
  ncurses_exec_log();
}

void ncurses_report_engine_stopped(int engine_id, int rc) {
  engine_status[engine_id] = 3;
  engine_rc[engine_id] = rc;

  refresh_engine_list();
}

void refresh_engine_list() {
  wclear(left_box);
  box(left_box, 0, 0);

  // define table headers
  char headers[5][10] = {"ID", "Status", "P Slot", "D Slot", "Code"};

  // print table headers

  wattron(left_box, COLOR_PAIR(1));
  for (int i = 0; i < 5; i++) {
    mvwprintw(left_box, 1, 2 + i * 15, "%s", headers[i]);
  }
  wattroff(left_box, COLOR_PAIR(1));

  // print table data
  for (int i = 0; i < HERMES_UBPF_ENGINES; i++) {
    for (int j = 0; j < 5; j++) {
      switch (j) {
      case 0:
        mvwprintw(left_box, i + 2, 2 + j * 15, "Eng %i", i);
        break;
      case 1:
        switch (engine_status[i]) {
        case 0:
          wattron(left_box, COLOR_PAIR(2));
          mvwprintw(left_box, i + 2, 2 + j * 15, "READY");
          wattroff(left_box, COLOR_PAIR(2));
          break;
        case 1:
          wattron(left_box, COLOR_PAIR(3));
          mvwprintw(left_box, i + 2, 2 + j * 15, "RUNNING");
          wattroff(left_box, COLOR_PAIR(3));
          break;
        case 2:
          wattron(left_box, COLOR_PAIR(3));
          mvwprintw(left_box, i + 2, 2 + j * 15, "CACHE");
          wattroff(left_box, COLOR_PAIR(3));
          break;
        case 3:
          wattron(left_box, COLOR_PAIR(4));
          mvwprintw(left_box, i + 2, 2 + j * 15, "STOPPED");
          wattroff(left_box, COLOR_PAIR(4));
          break;
        }

        break;

      case 2:
        if (engine_pslot[i] == -1)
          mvwprintw(left_box, i + 2, 2 + j * 15, "");
        else
          mvwprintw(left_box, i + 2, 2 + j * 15, "%i", engine_pslot[i]);
        break;

      case 3:
        if (engine_dslot[i] == -1)
          mvwprintw(left_box, i + 2, 2 + j * 15, "");
        else
          mvwprintw(left_box, i + 2, 2 + j * 15, "%i", engine_dslot[i]);
        break;

      case 4:
        if (engine_rc[i] == -1)
          mvwprintw(left_box, i + 2, 2 + j * 15, "");
        else if (engine_rc[i] == 0)
          mvwprintw(left_box, i + 2, 2 + j * 15, "%i", engine_rc[i]);
        else {
          wattron(left_box, COLOR_PAIR(5));
          mvwprintw(left_box, i + 2, 2 + j * 15, "%i", engine_rc[i]);
          wattroff(left_box, COLOR_PAIR(5));
        }
        break;
      }
    }
  }

  wrefresh(left_box);
}

void ncurses_draw() {
  // Initialize ncurses
  initscr(); // Initialize the screen
  cbreak();  // Disable line buffering
  noecho();  // Disable echoing of typed characters

  // Hide the cursor
  curs_set(0); // 0 = invisible, 1 = normal, 2 = very visible

  // Set up the screen
  int max_y, max_x;
  getmaxyx(stdscr, max_y, max_x);

  // Enable colors
  start_color();
  use_default_colors();

  init_pair(1, COLOR_BLUE, -1);   // Header
  init_pair(2, COLOR_GREEN, -1);  // Ready            | OK
  init_pair(3, COLOR_CYAN, -1);   // Running / Cache
  init_pair(4, COLOR_YELLOW, -1); // Stopped          | WARNING
  init_pair(5, COLOR_RED, -1);    // Error            | ERROR

  // Define title and subtitle
  char *title = "D E L I L A H";
  char *subtitle = "Computational Storage Platform";

  // Define left and right boxes
  int left_box_width = 75;
  int right_box_width = max_x - left_box_width - 2;
  int right_box_height = max_y - 5;
  int left_box_height = HERMES_UBPF_ENGINES + 3;
  left_box = newwin(left_box_height, left_box_width, 3, 1);
  right_box = newwin(right_box_height, right_box_width, 3, left_box_width + 2);
  left_box_bottom = newwin(right_box_height - left_box_height, left_box_width, left_box_height + 3, 1);
  scrollok(right_box, TRUE);
  scrollok(left_box_bottom, TRUE);

  // Draw title and subtitle
  attron(A_BOLD);
  mvprintw(0, max_x / 2 - strlen(title) / 2, "%s", title);
  attroff(A_BOLD);
  mvprintw(1, max_x / 2 - strlen(subtitle) / 2, "%s", subtitle);
  refresh();

  // Draw keyboard shortcuts
  attron(A_BOLD);
  attron(COLOR_PAIR(1));
  mvprintw(max_y - 2, 1, "ESC: Exit");
  attroff(A_BOLD);
  attroff(COLOR_PAIR(1));

  // Draw boxes
  wrefresh(left_box);
  wrefresh(right_box);
  wrefresh(left_box_bottom);
  refresh();
}

void ncurses_end() {
  int ch;
  while ((ch = getch()) != 27) {
    // loop until ESC key is pressed
  }

  // Clean up
  delwin(left_box);
  delwin(right_box);
  delwin(left_box_bottom);
  endwin();
}
