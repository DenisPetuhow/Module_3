#include "Parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrangle(a, b, a, b, A, B, A, B)
{
    if (std::abs(a_ - c_) > 0.001 || std::abs(b_ - d_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: противоположные стороны должны быть равны");
    }

    if (std::abs(A_ - C_) > 0.001 || std::abs(B_ - D_) > 0.001) {
        throw FigureException("Ошибка создания фигуры. Причина: противоположные углы должны быть равны");
    }

    name_ = "Параллелограмм";
}