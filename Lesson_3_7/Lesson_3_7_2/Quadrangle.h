#pragma once
#include "Figure.h"
#include "FigureException.h"

class Quadrangle : public Figure {
protected:
    double a_, b_, c_, d_, A_, B_, C_, D_;
public:
    Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_sides() const override;
    void print_angles() const override;
    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_d() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;
    double get_D() const;
};
