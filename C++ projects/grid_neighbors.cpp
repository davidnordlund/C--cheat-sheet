#include <iostream>
#include <vector>
using namespace std;

// Demonstrates how to find neighboring cells in a 2D array

int main() {
    char board[3][3] = {
        {'C', 'A', 'T'},
        {'D', 'O', 'G'},
        {'P', 'I', 'G'}
    };

    cout << "BOARD: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << "[" << board[row][col] << "]";
        }
        cout << endl;
    }
    cout << endl;

    int row = 1;
    int col = 1;
    cout << "Searching neighbours for " << board[row][col] << endl << endl;

    vector<char> neighbors; 
    bool visited[3][3] = {};
    visited[row][col] = true;


    // Check all positions around the current cell. 
    // dr = deltaRow
    // dc = deltaCol
    // We check -1, 0, 1
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {

            // Skip the middle cell xxx
            //                      x0x
            //                      xxx    
            if (dr == 0 && dc == 0) {
                continue;
            }

            int newRow = row + dr;
            int newCol = col + dc;

            cout << "Checking (" << newRow <<", " << newCol << "): ";
            cout << "Visited? " << visited[newRow][newCol] << endl;

            // Check board boundaries before accessing the cell.
            if (newRow >= 0 && newRow < 3 &&
                newCol >= 0 && newCol < 3) {

                    cout << "Visited? " << visited[newRow][newCol] << endl;
                

                if (!visited[newRow][newCol]) {
                    cout << board[newRow][newCol] << endl;
                    neighbors.push_back(board[newRow][newCol]);
                }
            } else {
                cout << "Outisde board!" << endl;
            }
        } 
    }

    cout << "\nResult, neighbors: ";

    for (char neighbor : neighbors) {
        cout << neighbor << " ";
        }

    cout << endl; 

    return 0;
}