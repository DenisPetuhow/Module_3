#include "Quadrangle.h"
#include <iostream>
#include <cmath>

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
    : Figure("Четырёхугольник"), a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D)
{
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: стороны четырехугольника должны быть положительными");
    }

    if (A <= 0 || B <= 0 || C <= 0 || D <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: углы четырехугольника должны быть положительными");
    }

    if (std::abs(A + B + C + D - 360) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    }
}

void Quadrangle::print_sides() const {
    std::cout << "Стороны: a=" << a_ << " b=" << b_ << " c=" << c_ << " d=" << d_ << std::endl;
}

void Quadrangle::print_angles() const {
    std::cout << "Углы: A=" << A_ << " B=" << B_ << " C=" << C_ << " D=" << D_ << std::endl;
}

double Quadrangle::get_a() const { return a_; }
double Quadrangle::get_b() const { return b_; }
double Quadrangle::get_c() const { return c_; }
double Quadrangle::get_d() const { return d_; }
double Quadrangle::get_A() const { return A_; }
double Quadrangle::get_B() const { return B_; }
double Quadrangle::get_C() const { return C_; }
double Quadrangle::get_D() const { return D_; }
