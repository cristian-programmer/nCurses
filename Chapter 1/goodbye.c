#include <ncurses.h>

int main(void){
  initscr();
  addstr("Goodbye, cruel c programming!");
  refresh();
  getch();

  endwin();
  return 0;
}
