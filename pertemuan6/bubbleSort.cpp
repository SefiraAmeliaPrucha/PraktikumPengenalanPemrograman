#include <iostream>
using namespace std;

int main (){

    // Bubble Sort
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n-1; i++){ //n-1 karena pada iterasi terakhir elemen sudah terurut
        for(int j = 0; j < n-i-1; j++){ //n-i-1 karena elemen terbesar sudah berada di posisi akhir setelah setiap iterasi
            if(arr[j] > arr[j+1]){ 
                // Tukar arr[j] dan arr[j+1]
                int temp = arr[j]; //menyimpan nilai arr[j] sementara
                arr[j] = arr[j+1]; //memindahkan nilai arr[j+1] ke arr[j]
                arr[j+1] = temp; //memindahkan nilai sementara (nilai awal arr[j]) ke arr[j+1]
            }
        }
    }
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } cout << endl; 

    return 0;

}