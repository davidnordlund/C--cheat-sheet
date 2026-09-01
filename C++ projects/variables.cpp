#include <iostream>

int main() {

    int x; // Declaration
    int y = 6;

    x = 15; // Assigning

    int sum = x + y;

    int age = 21;
    int year = 2026;
    int days = 365.6;

    std::cout << "" << '\n';
    std::cout << x << '\n'; // Output
    std::cout << y <<'\n'; // Output
    std::cout << sum << '\n'; // Output
    std::cout << days << '\n'; // Output

    // Doubles can store numbers including decimals
    double price = 99.99;
    std::cout << price << " <- This is a double" << '\n';

    // Chars, single characters
    std::cout << "" << '\n';
    char grade = 'A';
    char initial = 'D';
    char initial_last = 'N';

    std::cout << "My grade is: " << grade << '\n';
    std::cout << "My initials are: " << initial << initial_last << '\n';

    // Boolean, true or false statement
    bool student = true;
    std::cout << "Am i a student?: " << student << '\n';

    std::cout << "" << '\n';
    // How you store strings: 
    std::string name = "David Nordlund";
    std::cout << "My name is: " << name << '\n';

    return 0;
}