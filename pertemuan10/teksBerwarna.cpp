#include <ncurses/ncurses.h>
#include <unistd.h>
#include <string.h>

int main() {
    initscr();
    noecho();
    curs_set(FALSE);
    nodelay(stdscr, TRUE);

    const char *text = "Prucha Lulus 3.5 Tahun";
    int panjang = strlen(text);

    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);

    int x = 0;
    int y = max_y/2;

    //
    while(true){
        clear();
        start_color();
        init_pair(1, COLOR_RED, COLOR_BLACK);
        attron(COLOR_PAIR(1));
        mvprintw(y, x, "%s", text);
        attroff(COLOR_PAIR(1));
        refresh();

        napms(20);
        x++;

        if(x > max_x) x = -panjang;

        int ch = getch();
        if (ch != ERR){
            break;
        }
    }
    endwin();

    return 0;
}