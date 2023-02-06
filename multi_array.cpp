#include <iostream>
using namespace std;

int main() {
    int numbers[3][2];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout<< numbers[i][j]<<" ";
        }
        cout<<"\n"; //new line at each row   
    }

    return 0;
}