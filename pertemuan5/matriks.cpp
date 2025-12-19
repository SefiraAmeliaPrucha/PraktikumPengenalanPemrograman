#include <iostream>
using namespace std;

int main() {


    int matriks[100][100]; // deklarasi matriks 2D dengan ukuran maksimum 100x100
    int jumlahBaris, jumlahKolom;

    cout << "Input jumlah baris matriks: ";
    cin >> jumlahBaris;
    cout << "Input jumlah kolom matriks: ";
    cin >> jumlahKolom;

    //proses input elemen matriks
    for(int i = 0; i < jumlahBaris; i++) { // iterasi untuk setiap baris 
        for(int j = 0; j < jumlahKolom; j++) { // iterasi untuk setiap kolom
            cout << "Input elemen matriks pada baris " << i + 1 << ", kolom " << j + 1 << ": "; //i + 1 dan j + 1 untuk menampilkan indeks mulai dari 1
            cin >> matriks[i][j]; // matriks [i][j] menyimpan elemen yang diinputkan pengguna        
        } 
        cout << endl; // baris kosong untuk memisahkan input antar baris matriks
    }
    cout << "Hasil matriks:" << endl;

    //proses menampilkan matriks
    for(int i = 0; i < jumlahBaris; i++) { 
        for(int j = 0; j < jumlahKolom; j++) { 
            cout << matriks[i][j]; // menampilkan elemen matriks di posisi [i][j] 
        }
        cout << endl; // pindah ke baris berikutnya setelah menampilkan satu baris matriks
    }
    return 0;
}