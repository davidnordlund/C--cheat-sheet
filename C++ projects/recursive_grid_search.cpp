#include <iostream>
using namespace std;

// Demonstrates how to pass a 2D array to a function;

void printCell(char board[3][3], int row, int col) {

    // Base case: Stop if the position is outside the board. 
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return;
    }

    cout << "Current cell: " << board[row][col] << endl;

    printCell(board, row + 1, col + 1);
}

int main() {
    char board[3][3] = {
    {'C', 'A', 'T'},
    {'D', 'O', 'G'},
    {'P', 'I', 'G'}
    };

    printCell(board, 0, 0);

    return 0;
}




