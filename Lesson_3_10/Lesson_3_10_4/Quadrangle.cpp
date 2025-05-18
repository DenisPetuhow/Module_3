#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(int a, int b, int c, int d,
    int A, int B, int C, int D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    sides_count = 4;
    name = "Четырёхугольник";
}

void Quadrangle::print_info() const {
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b
        << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B
        << " C=" << C << " D=" << D << std::endl;
}

bool Quadrangle::check() const {
    return (A + B + C + D == 360 && sides_count == 4);
}
