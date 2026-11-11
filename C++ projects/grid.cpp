#include <iostream>
using namespace std;

// Demonstrates a 2D array and how to access rows and columns. 

int main() {
    char board[3][3] = {
        {'C', 'A', 'T'},
        {'D', 'O', 'G'},
        {'P', 'I', 'G'}
    };

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\n--------------\n";
    for (int row = 0; row < 3; row++) {
        cout << board[row][2-row]  << " ";
        cout << endl;
    }

    return 0;
}
