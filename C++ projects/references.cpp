#include <iostream>
#include <vector>
using namespace std;

// This document demonstrates range-based loops and references
// What difference does & do in a vector? Look below:

// vector<int>& gives: {2, 3, 20}
// vector<int> gives: {2, 3}

void addNUmber(vector<int>& numbers) {
    numbers.push_back(20);
}

int main() {
    vector<int> numbers = {2, 3};

    addNUmber(numbers);

    for (int number : numbers) {
        cout << number << endl;
    }

    return 0;
}