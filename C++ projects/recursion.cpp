#include <iostream>
using namespace std;

void countdown(int number) {
    cout << number << endl; 

    // Base case
    if (number == 0) {
        return;
    }

    countdown(number - 1);
};

int main() {
    countdown(5); 

    return 0;
}