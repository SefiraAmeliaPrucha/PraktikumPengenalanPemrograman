#include <iostream>
using namespace std;

int main (){

    // sequential search
    string arr[] = {"stark", "lannister", "targaryen", "tully", "baratheon" };
    int size = sizeof(arr)/sizeof(arr[0]); //menghitung jumlah elemen dalam array
    bool find = false; //false menandakan elemen belum ditemukan (default nilai awal)

    string target = "stark"; //elemen yang dicari dalam array

    for(int i = 0; i < size; i++){ //i < size artinya iterasi dari indeks 0 hingga indeks terakhir array
        if(arr[i] == target){ //membandingkan elemen array dengan elemen target
            find = true; //jika ditemukan, set find menjadi true
            cout << "klan " << target << " ditemukan pada indeks ke-" << i << endl;
            break; //menghentikan loop setelah menemukan elemen
        }
    }
    if(!find){ //jika find tetap false setelah loop, berarti elemen tidak ditemukan
        cout << "Data tidak ditemukan" << endl;
    }
    return 0;
}
