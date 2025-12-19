#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile;
    string teks;

    myFile.open("prucha.txt");
    getline(myFile, teks);

    if (!myFile) {
        cerr << "File tidak dapat dibuka!" << endl;
        return 1;
    }
    cout << teks << endl;
    myFile.close();
}
