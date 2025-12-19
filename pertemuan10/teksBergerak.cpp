#include <ncurses/ncurses.h>
#include <unistd.h>
using namespace std;

int main(){
    short int kolom, baris;
    initscr();


    for(kolom = 10; kolom <= 70; kolom++) ////menggerakkan teks dari kolom 10 sampai kolom 70
    { 
        mvprintw(11, kolom, "%s", "a"); //%s karena "a" adalah string
        mvprintw(11, 80-kolom, "%s", "a"); //menggerakkan teks dari kolom 70 sampai kolom 10
        refresh();sleep(1); //menunggu selama 1 detik
        getch();
        clear();
    }
    for (baris = 5; baris <= 65; baris++) //menggerakkan teks dari baris 5 sampai baris 20
    {
        mvprintw(11, baris, "%s", "Pruchaaa..."); //menggerakkan teks dari baris 5 sampai baris 20
        mvprintw(11, baris-1, "%s", "          "); //menghapus teks pada baris sebelumnya dengan spasi
        refresh();sleep(1);
        getch();
    }

    getch();
    endwin();



    return 0;
}