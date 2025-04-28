#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : Figure("Треугольник"), a_(a), b_(b), c_(c), A_(A), B_(B), C_(C)
{
    if (a <= 0 || b <= 0 || c <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: стороны треугольника должны быть положительными");
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        throw FigureException("Ошибка создания фигуры. Причина: сумма длин любых двух сторон треугольника должна быть больше длины третьей стороны");
    }

    if (A <= 0 || B <= 0 || C <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: углы треугольника должны быть положительными");
    }

    if (std::abs(A + B + C - 180) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 180");
    }
}

void Triangle::print_sides() const {
    std::cout << "Стороны: a=" << a_ << " b=" << b_ << " c=" << c_ << std::endl;
}

void Triangle::print_angles() const {
    std::cout << "Углы: A=" << A_ << " B=" << B_ << " C=" << C_ << std::endl;
}

double Triangle::get_a() const { return a_; }
double Triangle::get_b() const { return b_; }
double Triangle::get_c() const { return c_; }
double Triangle::get_A() const { return A_; }
double Triangle::get_B() const { return B_; }
double Triangle::get_C() const { return C_; }