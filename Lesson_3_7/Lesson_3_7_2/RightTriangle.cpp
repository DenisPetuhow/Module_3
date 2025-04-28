#include "RightTriangle.h"
#include <cmath>

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90)
{
    if (std::abs(C_ - 90) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: угол C должен быть равен 90 градусов");
    }

    name_ = "Прямоугольный треугольник";
}