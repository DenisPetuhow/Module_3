#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
    sides_count = 3;
    name = "Треугольник";
}

void Triangle::print_info() const {
    Figure::print_info();

    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}

bool Triangle::check() const {
    return (A + B + C == 180 && sides_count == 3);
}
