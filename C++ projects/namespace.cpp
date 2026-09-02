#include <iostream>

namespace first{
    int x = 1; 
}

namespace second{
    int x = 2; 
}

int main() {

    // Namespace = provides a solution for preventing name conflicts in large projects.
    // Each entity needs to be declared in a namespace, and the same name can be used in different namespaces.

    using namespace std; // No longer need to write "std::"

    int x = 0; // Local x
    cout << '\n';
    std::cout << "Local x: " << x << std::endl; // Local x: 0
    std::cout << "First Namespace x: " << first::x << std::endl; // First Namespace x: 1
    std::cout << "Second Namespace x: " << second::x << '\n'; // Second Namespace x: 2

    cout << '\n';
    cout << "My name is David"; 
    return 0;
}