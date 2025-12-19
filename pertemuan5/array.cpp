#include <iostream>
using namespace std;

int main() {
//
    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10}; 
    cout << "Tanggal " << tanggal[9];

    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << " Hari " << hari[4] << endl;

    char namaP[] = {'P', 'r', 'u', 'c', 'h', 'a'};
    cout << "Nama panggilan (char) : " << namaP << endl;

    string namaL = "Prucha menaklukan c++";
    cout << "Nama lengkap (string) : " << namaL << endl;

    //while loop untuk menampilkan isi array hari
    int i = 0;
    while(i < 7){
        cout << "Hari ke-" << i + 1 << " : " << hari[i] << endl;
        i++;
    } cout << endl;

    int panjang =  sizeof(hari) / sizeof(hari[0]); //menghitung panjang array hari
    cout << "Panjang array hari: " << panjang << endl << endl;
    cout << "Prucha menaklukan c++ dalam " << panjang << " hari." << endl << endl;


    //menghitung total rata-rata penjualan ayam geprek selama seminggu
    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    cout << "Masukkan jumlah porsi penjualan ayam geprek selama " << jumlahHari << " hari:" << endl;
    for(int j = 0; j < jumlahHari; j++){ //loop untuk input penjualan setiap hari
        cout << "Hari ke-" << j + 1 << ": ";
        cin >> penjualan[j]; //input penjualan hari ke-j
        totalPenjualan += penjualan[j]; //menjumlahkan total penjualan
    }
    rataRata = (float)totalPenjualan / jumlahHari; 
    cout << "Total penjualan ayam geprek selama " << jumlahHari << " hari adalah " << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan ayam geprek selama " << jumlahHari << " hari adalah " << rataRata << " porsi per hari." << endl << endl;

    int matriks[100][100]; 
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai ayam geprek: " << endl;
    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;

    //proses input elemen matriks
    for(int x = 0; x < jumlahBaris; x++) { 
        for(int y = 0; y < jumlahKolom; y++) { 
            cout << "Input penjualan ayam geprek pada bulan ke-" << x + 1 << ", tanggal " << y + 1 << ": "; 
            cin >> matriks[x][y];             
        } 
        cout << endl; 
    }
    cout << "Kedai ayam geprek buka selama : " << jumlahBaris << " bulan ditanggal tertentu." << endl;

    //proses menampilkan matriks
    cout << "Data penjualan ayam geprek:" << endl;
    for(int x = 0; x < jumlahBaris; x++) { 
        cout << "Bulan ke-" << x + 1 << " : ";
        for(int y = 0; y < jumlahKolom; y++) { 
            cout << matriks[x][y] << " "; 
        }
        cout << endl; 
    }
    return 0;
}