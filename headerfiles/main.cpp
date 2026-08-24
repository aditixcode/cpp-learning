#include <iostream>
#include "mathUtils.h"

int main()
{
    int a = 20;
    int b = 6;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << "\n\n";

    std::cout << "Addition:       " << add(a, b) << '\n';
    std::cout << "Subtraction:    " << subtract(a, b) << '\n';
    std::cout << "Multiplication: " << multiply(a, b) << '\n';
    std::cout << "Division:       " << divide(a, b) << '\n';
    std::cout << "Modulus:        " << modulus(a, b) << '\n';

    return 0;
}
