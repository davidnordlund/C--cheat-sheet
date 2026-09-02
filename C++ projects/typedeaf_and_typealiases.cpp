#include <iostream>
#include <string>

    // typedef = reserved keyword used to create an additional name
    // (alias) for another data type.


int main() {

    using namespace std; // No longer need to write "std::"
    using Distance = double; // Distance is now an alias for double

    using price = double; // price is now an alias for double

    typedef std::string str; // str is now an alias for std::string
    typedef int age; // age is now an alias for int

    cout << '\n';
    str name = "David"; // str is now an alias for std::string
    cout << "My name is " << name << std::endl;

    Distance shcool = 2.5; // Distance is now an alias for double
    cout << "Distance to school: " << shcool << " Km" << std::endl;

    cout << '\n';
    age myAge = 20;
    cout << "My age is " << myAge << " years old" << std::endl;

    cout << '\n';
    price itemPice = 10.99;
    cout << "Item price: $" << itemPice << '\n';

    return 0;
}