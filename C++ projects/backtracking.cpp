#include <iostream>
#include <vector>
using namespace std;

// This docuemtn demonstrates recursive backtracking by 
// searching for a combination of numbers that sums to a target


bool findSum(int currentSum, int target, vector<int>& path) {

    // Base case: We found a valid combination
    if (currentSum == target) {
        return true;
    }

    // Stop exploring if the sum is too large!
    if (currentSum > target) {
        return false;
    }

    for (int number : {3, 2}) {

        // Choose
        path.push_back(number);

        // Explore
        if (findSum(currentSum + number, target, path)) {
            return true;
        }

        // Backtrack: Undo our choice
        path.pop_back();
    }

    return false;
};


int main() {
    vector<int> path; 

    if (findSum(5, 7, path)) {
        cout << "Found a combination: ";

        for (int number : path) {
            cout << number << " ";
        }

        cout << endl;

    } else {
        cout << "No combination found." << endl;
    }

    return 0; 
}