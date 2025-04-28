#include "IsoscelesTriangle.h"
#include <cmath>

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A)
{
    if (std::abs(a_ - c_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: стороны a и c должны быть равны");
    }

    if (std::abs(A_ - C_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: углы A и C должны быть равны");
    }

    name_ = "Равнобедренный треугольник";
}