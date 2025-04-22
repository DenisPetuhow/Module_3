/*
#include <iostream>
#include <string>

// Базовый класс Figure
class Figure {
protected:
    std::string name;

public:
    Figure(const std::string& name) : name(name) {}

    virtual std::string get_name() const {
        return name;
    }

    virtual void print_sides() const = 0;
    virtual void print_angles() const = 0;

    virtual ~Figure() = default;
};

// Класс Triangle
class Triangle : public Figure {
private:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C)
        : Figure("Треугольник"), a(a), b(b), c(c), A(A), B(B), C(C) {
    }

    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }

    void print_sides() const override {
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    }

    void print_angles() const override {
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

// Прямоугольный треугольник
class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B)
        : Triangle(a, b, c, A, B, 90) { // По правилам вызывает конструктор Triangle у которого есть уже имя, поэтому мы его переопределяем
        this->name = "Прямоугольный треугольник";
    }
};

// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : Triangle(a, b, a, A, B, A) {
        this->name = "Равнобедренный треугольник";
    }
};

// Равносторонний треугольник
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side)
        : Triangle(side, side, side, 60, 60, 60) {
        this->name = "Равносторонний треугольник";
    }
};

// Класс Quadrangle
class Quadrangle : public Figure {
private:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
        : Figure("Четырёхугольник"), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    }

    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_d() const { return d; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }
    int get_D() const { return D; }

    void print_sides() const override {
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    }

    void print_angles() const override {
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

// Прямоугольник
class Rectangle : public Quadrangle {
public:
    Rectangle(int a, int b)
        : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
        this->name = "Прямоугольник";
    }
};

// Квадрат
class Square : public Rectangle {
public:
    Square(int a)
        : Rectangle(a, a) {
        this->name = "Квадрат";
    }
};

// Параллелограмм
class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B)
        : Quadrangle(a, b, a, b, A, B, A, B) {
        this->name = "Параллелограмм";
    }
};

// Ромб
class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B)
        : Parallelogram(a, a, A, B) {
        this->name = "Ромб";
    }
};

// Функция для вывода информации о фигуре
void print_info(Figure* figure) {
    std::cout << figure->get_name() << ":" << std::endl;
    figure->print_sides();
    figure->print_angles();
    std::cout << std::endl;
}

int main() {
    std::setlocale(LC_CTYPE, "rus");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);

    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return 0;
}
*/