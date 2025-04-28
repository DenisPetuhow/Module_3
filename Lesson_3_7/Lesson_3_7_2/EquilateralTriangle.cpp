#include "EquilateralTriangle.h"
#include <cmath>

EquilateralTriangle::EquilateralTriangle(double a)
    : Triangle(a, a, a, 60, 60, 60)
{
    if (std::abs(a_ - b_) > 0.001 || std::abs(a_ - c_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: все стороны должны быть равны");
    }

    if (std::abs(A_ - 60) > 0.001 || std::abs(B_ - 60) > 0.001 || std::abs(C_ - 60) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: все углы должны быть равны 60 градусов");
    }

    name_ = "Равносторонний треугольник";
}