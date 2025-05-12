
#pragma once
#include "Figure.h"

// Треугольник (Model)
class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle(const std::string& name, int a, int b, int c, int A, int B, int C);
    void print_sides() const override;
    void print_angles() const override;
};