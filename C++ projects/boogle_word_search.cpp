#include <iostream>
#include <string>
using namespace std;

// Demonstrates recursive backtracking to find a word in a 2D board. 

bool searchWord(char board[3][3], 
                bool visited[3][3], 
                int row, 
                int col, 
                string word, 
                int index) {

    // Stop if the position is outside the board. 
    if (row < 0 || row >= 3 || col < 0 || row >= 3) {
        return false; 
    }

    // Stop if the cell is used or has the wrong letter. 
    if (visited[row][col] || board[row][col] != word[index]) {
        return false;
    }

    // We have matched the last letter. 
    if (index == static_cast<int>(word.size()) - 1) {
        return true; 
    }

    cout << "MATCH: " << board[row][col] << endl;

    // Choose: Mark the current cell as visited.
    visited[row][col] = true;

    // Explore all eight neighbors. 
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {

            // Skip the current cell. 
            if (dr == 0 && dc == 0) {
                continue;
            }


            // Recursively search for the next letter. 
            if (searchWord(board, visited, 
                            row + dr, 
                            col + dc, 
                            word, 
                            index + 1)) {

                visited[row][col] = false; 
                return true; 
            }
        }
    }

    // Backtrack: Undo our choice.
    cout << "  BACKTRACK: " << board[row][col] << endl;
    visited[row][col] = false; 
    return false;
}

int main() {

    char board[3][3] = {
        {'C', 'A', 'T'},
        {'D', 'O', 'G'},
        {'P', 'I', 'G'}
    };

    bool visited[3][3] = {};
    string word = "DOG";

    // Start searching from D at position (1, 0)
    if (searchWord(board, visited, 1, 0, word, 0)) {
        cout << "'"<<word << "' was found!" << endl;
    } else {
        cout << "'" << word << "' was not found!" << endl;
    }


    return 0; 
}