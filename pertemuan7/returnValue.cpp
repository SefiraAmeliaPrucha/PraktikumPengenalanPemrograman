#include <iostream>
using namespace std;    

double luasPersegi(double sisi){
    return sisi * sisi;
}

int main(){
    double sisi, luas;
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    luas = luasPersegi(sisi);

    cout << "Luas persegi dengan sisi " << sisi << " adalah " << luas << endl;

    return 0;
}