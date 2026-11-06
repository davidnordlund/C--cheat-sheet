
#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // Pointer is a variable that stores the memory address of another variable
    int* ptr = &a; // ptr is a pointer to an integer and it stores the address of variable a

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl; // prints the address of a
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // dereferencing the pointer to get the value of a

    // Changing the value of a using the pointer
    *ptr = 30; // dereferencing the pointer and changing the value of a
    std::cout << "New value of a: " << a << std::endl;

    // Changing the pointer to point to b
    ptr = &b; // now ptr points to b
    std::cout << "Value of b: " << b << std::endl;
    std::cout << "Address of b: " << &b << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // dereferencing the pointer to get the value of b

    return 0;
}