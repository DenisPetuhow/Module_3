/*
#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count = 0;
    std::string name = "Фигура";

public:
    Figure() = default;

    virtual void print_info() const {
        std::cout << name << ":" << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << sides_count << std::endl;
    }

    virtual bool check() const {
        return sides_count == 0;
    }

    virtual ~Figure() = default;
};

// =================== Треугольники ===================

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
        sides_count = 3;
        name = "Треугольник";
    }

    void print_info() const override {
        Figure::print_info();
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }

    bool check() const override {
        return (A + B + C == 180 && sides_count == 3);
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B)
        : Triangle(a, b, c, A, B, 90) {
        name = "Прямоугольный треугольник";
    }

    bool check() const override {
        return (Triangle::check() && C == 90);
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник";
    }

    bool check() const override {
        return (Triangle::check() && a == c && A == C);
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side)
        : Triangle(side, side, side, 60, 60, 60) {
        name = "Равносторонний треугольник";
    }

    bool check() const override {
        return (Triangle::check() &&
            a == b && b == c &&
            A == 60 && B == 60 && C == 60);
    }
};

// =================== Четырёхугольники ===================

class Quadrangle : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrangle(int a, int b, int c, int d,
        int A, int B, int C, int D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        sides_count = 4;
        name = "Четырёхугольник";
    }

    void print_info() const override {
        Figure::print_info();
        std::cout << "Стороны: a=" << a << " b=" << b
            << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B
            << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }

    bool check() const override {
        return (A + B + C + D == 360 && sides_count == 4);
    }
};

class Rectangle : public Quadrangle {
public:
    Rectangle(int a, int b)
        : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
        name = "Прямоугольник";
    }

    bool check() const override {
        return (Quadrangle::check() &&
            a == c && b == d &&
            A == 90 && B == 90 && C == 90 && D == 90);
    }
};

class Square : public Rectangle {
public:
    Square(int side)
        : Rectangle(side, side) {
        name = "Квадрат";
    }

    bool check() const override {
        return (Rectangle::check());
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B)
        : Quadrangle(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм";
    }

    bool check() const override {
        return (Quadrangle::check() &&
            a == c && b == d &&
            A == C && B == D);
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B)
        : Parallelogram(a, a, A, B) {
        name = "Ромб";
    }

    bool check() const override {
        return (Parallelogram::check() &&
            a == b && b == c && c == d);
    }
};

// =================== Main ===================

void print_figure(Figure* f) {
    f->print_info();
}

int main() {
    std::setlocale(LC_CTYPE, "rus");
    Figure f;
    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt_wrong(10, 20, 30, 50, 60);
    RightTriangle rt_ok(10, 20, 30, 50, 40);
    IsoscelesTriangle iso(10, 20, 50, 60);
    EquilateralTriangle eq(30);

    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle r(10, 20);
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
*/