#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myFile;
    string teks;

    cout << "Masukkan teks yang akan ditambahkan ke file: ";
    getline(cin, teks);

    myFile.open("prucha.txt", ios::app);
    myFile << teks << endl;

    cout << "Teks berhasil ditambahkan ke file." << endl;
    myFile.close();
}