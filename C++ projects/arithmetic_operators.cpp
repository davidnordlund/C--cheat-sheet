#include <iostream>

int main() {

    // Arithmetic operators = return the result of a specific
    // arithemetic operation (+, -, *, /, %)

    int students = 20;

    int student = students + 1;
    students +=1;
    students++;

    students = students - 1;
    students-=1; // Same thing as student = student - 1;
    students--;

    students = students * 2;
    students *=2;

    students = students / 2;
    students /= 2;
    students /=3; // Trunkates the result to an integer, loose the deciaml part


    students = 20;
    int remainder = students % 3; // Returns the remainder of students divided by 3
    std::cout << '\n';
    std::cout << "Remainder: " << remainder << std::endl;

    std::cout << "Students: " << students << std::endl;

}