#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const std::string& name, int a, int b, int c, int A, int B, int C)
    : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C) {
}

void Triangle::print_sides() const {
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
}

void Triangle::print_angles() const {
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}