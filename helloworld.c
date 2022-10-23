#include <ncurses.h>

int main()
{
    initscr();
    printw("Hello Adam!");
    refresh();
    getch();
    endwin();

    return 0;
}
