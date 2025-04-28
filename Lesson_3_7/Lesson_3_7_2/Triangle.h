#pragma once
#include "Figure.h"
#include "FigureException.h"
#include <cmath>

class Triangle : public Figure {
protected:
    double a_, b_, c_, A_, B_, C_;
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    void print_sides() const override;
    void print_angles() const override;
    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;
};