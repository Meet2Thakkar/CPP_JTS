// Guessing game using random number
#include <iostream>
using namespace std;

int main() {
    string numberG;
    int intnumberG = 0;
    int randnum = (rand()%10) + 1;

    do{
        cout << "Guess the neumber 1-10: ";
        getline(cin, numberG);
        //stoi - convert from string to integer
        intnumberG = stoi(numberG);
        cout << intnumberG << endl;
    } while(intnumberG != randnum);
    cout <<"you win" << endl;
}