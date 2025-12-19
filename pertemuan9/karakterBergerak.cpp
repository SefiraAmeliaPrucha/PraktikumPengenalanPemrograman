#include <ncurses/ncurses.h>
#include <string>
using namespace std;

int main() {
    int x = 10, y = 10; //posisi awal teks
    int ch;
    // Menginisialisasi layar ncurses
    initscr(); // Memulai mode ncurses

    raw(); //mengaktifkan mode input mentah (menerima input apa adanya tanpa buffering)
    keypad(stdscr, TRUE); //mengaktifkan fungsi keypad untuk menangani input tombol khusus seperti panah
    noecho(); //mencegah karakter yang diketik muncul di layar secara otomatis
    //instruksi untuk menggerakkan teks berdasarkan input pengguna
    mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");
    
    while((ch = getch()) != 'q') { //loop hingga pengguna menekan 'q' untuk keluar
        clear(); //membersihkan layar setiap iterasi(menghapus teks sebelumnya
        refresh(); //memperbarui layar untuk menampilkan perubahan
        mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");
        // memeriksa input pengguna dan mengubah posisi teks sesuai dengan tombol yang ditekan
        switch(ch){
            case KEY_UP:
                y = (y > 0) ? y - 1 : y; //mencegah teks bergerak di luar batas atas layar(y tidak kurang dari 1)
                break; // bergerak ke atas
            case KEY_DOWN:
                y = (y < LINES - 1) ? y + 1 : y; //mencegah teks bergerak di luar batas bawah layar(y tidak lebih dari jumlah baris layar -1)
                break; // bergerak ke bawah
            case KEY_LEFT:
                x = (x > 0) ? x - 1 : x; //mencegah teks bergerak di luar batas kiri layar(x tidak kurang dari 0)
                break; // bergerak ke kiri
            case KEY_RIGHT:
                x = (x < COLS - 1) ? x + 1 : x; //mencegah teks bergerak di luar batas kanan layar(x tidak lebih dari jumlah kolom layar -1)
                break; // bergerak ke kanan
            case 'w':
                if (y > 0) y--; else y = LINES - 1;
                if (x > 0) x--; else x = COLS - 1;
                break;
            // e : up-right
            case 'e':
                if (y > 0) y--; else y = LINES - 1;
                if (x < COLS - 1) x++; else x = 0;
                break;
            // z : down-left
            case 'z':
                if (y < LINES - 1) y++; else y = 0;
                if (x > 0) x--; else x = COLS - 1;
                break;

            // c : down-right
            case 'c':
                if (y < LINES - 1) y++; else y = 0;
                if (x < COLS - 1) x++; else x = 0;
                break;
        }
        //debugging: menampilkan posisi saat ini dari teks
        string xTemp = to_string(x); //mengonversi posisi x ke string()
        string yTemp = to_string(y); //mengonversi posisi y ke string()
        string chTemp = to_string(ch); //mengonversi kode karakter input ke string()
        
        mvprintw(1, 0, "x: "); 
        mvprintw(1, 4, xTemp.c_str());

        mvprintw(2, 0, "y: ");
        mvprintw(2, 4, yTemp.c_str());

        mvprintw(3, 0, "in: ");
        mvprintw(3, 4, chTemp.c_str());

        mvprintw(y, x, "xxxxO"); //menampilkan teks "X" pada posisi (y, x)
        refresh(); //memperbarui layar untuk menampilkan perubahan
    }
 
    endwin();
    return 0;
}