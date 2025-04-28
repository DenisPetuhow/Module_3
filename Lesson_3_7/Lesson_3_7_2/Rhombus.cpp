#include "Rhombus.h"
#include <cmath>

Rhombus::Rhombus(double a, double A, double B)
    : Parallelogram(a, a, A, B)
{
    if (std::abs(a_ - b_) > 0.001 || std::abs(a_ - c_) > 0.001 || std::abs(a_ - d_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: все стороны должны быть равны");
    }

    name_ = "Ромб";
}