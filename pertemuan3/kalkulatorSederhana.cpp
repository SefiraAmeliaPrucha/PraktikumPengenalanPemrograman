#include <iostream>
using namespace std;
int main (){
    float angka1, angka2, hasil;
    char operasi;
    
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;


   if(operasi == '+'){
        hasil = angka1 + angka2;
    } else if(operasi == '-'){
        hasil = angka1 - angka2;
    } else if(operasi == '*'){
        hasil = angka1 * angka2;
    } else if(operasi == '/'){
        if(angka2 != 0){
            hasil = angka1 / angka2; 
        } else {
            cout << "Pembagian dengan nol tidak diperbolehkan" << endl;
            return 1; // keluar dari program dengan kode error
        }
    } else {
        cout << "Operasi tidak valid." << endl;
        return 1; // keluar dari program dengan kode error
    }
    cout << "hasil:  " << hasil;
    
    return 0;
}