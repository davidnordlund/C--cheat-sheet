#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\n--- Experiment 1: Two pointers ---\n";

    // Dynamically allocate an integer on the heap. 
    int* original = new int(100); 

    // Copy the pointer, NOT the integer itself.
    int* copy = original; 


    cout << "Original value: " << *original << endl;
    cout << "Copy value: " << *copy << endl;


    // Modify the integer trough the second pointer.
    *copy = 50;


    cout << "\nAfter changing *copy:\n",
    cout << "Original value: " << *original <<endl;
    cout << "Vopy value: " << *copy << endl;

    // Both pointers refer to the same allocation
    // Therefore, delete the allocation only once.
    delete original;
    original = nullptr;
    copy = nullptr;



    cout << "\n--- Experiment 2: Pointers vs References ---\n";

    // Create an ordinary integer.
    int number = 100;

    // Create a pointer to number.
    int* ptr = &number;

    // Create a reference to number.
    int& reference = number;

    // Print the values:
    cout << "Number: " << number << endl;
    cout << "Ptr: " << *ptr << endl;
    cout << "Reference: " << reference << endl;


    // Modify number trough the pointer.
    *ptr = 50;

    cout << "\nAfter *ptr = 50\n";
    cout << "number: " << number << endl,


    // Modify the number trough the reference:
    reference = 25;

    cout << "\nAfter reference = 25\n";
    cout << "number:  " << number << endl;



    cout << "\n--- Experiment 3: Deep Copy ---\n";
    // Allocate memory for the original integer:
    int* originalValue = new int(100);

    // Allocate NEW memory and copy the original value.
    int* copiedValue = new int(*originalValue);

    // Modify only the copied integer:
    *copiedValue = 50;
    
    cout << "Original: " << *originalValue << endl; // 100
    cout << "Copy: " << *copiedValue << endl;       // 50

    // Each pointer owns a separate allocation.
    delete originalValue;
    delete copiedValue;

    originalValue = nullptr;
    copiedValue = nullptr;

    return 0;
}