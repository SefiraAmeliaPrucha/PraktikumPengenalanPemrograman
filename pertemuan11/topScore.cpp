#include <iostream>
#include <fstream>
using namespace std;

int main();
void registration(){

    ofstream myFile, accList;
    string userReg;

    system("cls");
    cout << "=== Registration ===" << endl;
    cout << "Masukkan username: ";
    cin >> userReg;

    cout << endl;

    myFile.open(userReg + ".txt");
    myFile << 0;
    myFile.close();

    accList.open("accountList.txt", ios::app);
    accList << userReg << endl;

    system("cls");
    cout << "Registration successful!" << endl;
    main();
}

void login(){
    ifstream myFile;
    string userLog;
    string userData;

    bool exist = false;

    system("cls");
    cout << "=== Login ===" << endl;
    cout << "Masukkan username: ";
    cin >> userLog;
    cout << endl;

    myFile.open("accountList.txt");
    while(myFile >> userData){
        if(userLog == userData){
            exist = true;
            break;
        }
    }
    myFile.close();

    if(exist == true){
        myFile.open(userLog + ".txt");
        system("cls");
        cout << "Login successful!" << endl;

        int topScore;
        cout << "Input your top score: ";
        cin >> topScore;

        ofstream scoreFile;
        ifstream scoreCheck;
        int currentScore;

        scoreCheck.open(userLog + ".txt");
        scoreCheck >> currentScore;

        if(topScore > currentScore){
            scoreFile.open(userLog + ".txt");
            scoreFile << topScore;
            scoreFile.close();

            cout << "\n Your Top Score Is : " << topScore << endl;
        }
        myFile.close();
    } else {
        system("cls");
        cout << "=================================" << endl;
        cout << "            LOGIN ERROR          " << endl;
        cout << "Please check your username again!" << endl;
        cout << "=================================" << endl;
        main();
    }
}
int main(){
    int choice;

    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cout << "3. Input Your Choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        default:
            system("cls");
            cout << "Invalid choice! Please try again." << endl;
            main();
            break;
    }
}