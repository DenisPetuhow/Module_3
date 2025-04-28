#pragma once
#include "Triangle.h"
#include "FigureException.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
};