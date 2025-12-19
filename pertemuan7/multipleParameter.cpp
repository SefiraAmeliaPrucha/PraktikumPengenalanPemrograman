#include <iostream>
using namespace std;

void tampilkanHasil(string nama, double kuis, double uts, double uas, double hasil){
    cout << "Nama : " << nama << endl;
    cout << "Nilai Kuis: " << kuis << endl;
    cout << "Nilai uts: " << uts << endl;
    cout << "Nilai uas: " << uas << endl;
    cout << "Nilai Akhir: " << (kuis + uts + uas) /3 << endl;
}
int main(){
    string nama;
    double kuis, uts, uas, hasil;
    char ulang;

    do {
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Nilai Kuis: ";
    cin >> kuis;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;
    
    tampilkanHasil (nama, kuis, uts, uas, hasil);

    cout << "\nPengen hitung lagi? (y/n) : ";
    cin >> ulang;

    } while (ulang == 'H' || ulang == 'h');
    cout << "ARIGATOU NEOMU MUCH";
    return 0;

}
