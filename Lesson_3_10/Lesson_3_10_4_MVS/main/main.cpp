#include <locale>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectanglee.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"



void print_figure(Figure* f) {
    f->print_info();
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Figure f;
    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt_wrong(10, 20, 30, 50, 60);
    RightTriangle rt_ok(10, 20, 30, 50, 40);
    IsoscelesTriangle iso(10, 20, 50, 60);
    EquilateralTriangle eq(30);

    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectanglee r(10, 20);
    Square s(20);
    Parallelogram p(20, 30, 30, 40);
    Rhombus rh(30, 30, 40);

    print_figure(&f);
    print_figure(&t);
    print_figure(&rt_wrong);
    print_figure(&rt_ok);
    print_figure(&iso);
    print_figure(&eq);
    print_figure(&q);
    print_figure(&r);
    print_figure(&s);
    print_figure(&p);
    print_figure(&rh);


    return 0;
}
