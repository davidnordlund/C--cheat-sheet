#include <iostream>

int main() {

    // Type conversion = convertion the value of one data type to another data type
    //                      Implicit conversion (automatically) = done by the compiler
    //                      Explicit conversion (manually) = done by the programmer

    std::cout << '\n';

    int x = 3.14;
    std::cout << x;

    std::cout << (char) 100 << std::endl; // Converts do 'd'

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100.0;
    std::cout << score << "%" <<std::endl;

    return 0;
}