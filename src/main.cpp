#include <iostream>
#include "complex.hpp"

int main() {
    Complex a(2, -2);
    auto b = a + a;
    auto c = a - b;
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
    std::cout << "c: " << c << '\n';
    std::cout << std::endl;
    return 0;
}