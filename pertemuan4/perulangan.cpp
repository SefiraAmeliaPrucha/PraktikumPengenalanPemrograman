#include <iostream>
using namespace std;

int main(){
    cout << "cara kerja for loop" << endl;
    for (int i = 0; i <= 5; i++){
        cout << "Nilai i: " << i << endl;
    }
    cout << endl;

    cout << "cara kerja while loop" << endl;
    int j = 0;
    while (j <= 5){
        cout << "Nilai j: " << j << endl;
        j++;
    }
    cout << endl;

    cout << "cara kerja do while loop" << endl;
    int k = 0;
    do {
        cout << "Nilai k: " << k << endl;
        k++;
    } while (k <= 5);
    cout << endl;

    cout << "penggunaan continue di for loop" << endl;
    for (int a = 0; a <=10; a++){
        if(a == 5){
            continue;
        }
        cout << "Nilai a: " << a << endl;
    } cout << endl;

    cout << "penggunaan break di for loop" << endl;
    for (int b = 0; b <= 5; b++){
        if (b == 5){
            break;
        }
        cout << "Nilai b : " << b << endl;
    } cout << endl;



    return 0;
}