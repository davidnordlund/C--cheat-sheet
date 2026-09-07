#include <iostream>
#include <string>
#include <limits>

int main() {

    // User input = allows a program to accept data from the user
    // cout << (insertion operation) sends data to the output stream (std::cout)
    // cin >> (extraction operation) extracts data from the input stream (std::cin)

    using namespace std;
    string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << '\n' << "Your name is: " << name << std::endl; 


    int age;
    std::cout << "How old are you?: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;

    // This line is neeeded otherwise the getline() function will not work properly
    // after the cin >> operator
    // It will try to read the leftover '\n' character from the 
    // input stream and will not wait for user input 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter your full name: ";
    string fullName;
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << std::endl;

    return 0;
}