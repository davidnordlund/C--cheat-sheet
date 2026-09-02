#include <iostream>

// The const keyword specifies that a variables value
// is constant and cannot be changed after initialization (read only).

int main() {

    const double PI = 3.14159; // pi is a constant and cannot be changed
    double radius = 10.0; // radius is a variable that can be changed
    double circumference = 2 * PI * radius;

    std::cout << "" << '\n';
    std::cout << "Circumference: " << circumference << " Cm" << std::endl;

    const int LIGHT_SPEED = 299792458; // light speed is a constant and cannot be changed
    std::cout << '\n' << "Light Speed: " << LIGHT_SPEED << " m/s" << std::endl;

    return 0;
}