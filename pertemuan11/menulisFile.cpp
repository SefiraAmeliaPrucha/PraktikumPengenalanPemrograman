#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myFile;
    string teks;

    cout << "Masukkan teks yang akan ditulis ke file: ";
    getline(cin, teks);

    myFile.open("prucha.txt");
    myFile << teks;

    cout << "Teks berhasil ditulis ke file." << endl;
    myFile.close();

}