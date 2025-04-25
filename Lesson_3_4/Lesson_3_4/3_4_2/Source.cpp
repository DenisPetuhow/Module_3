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
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(const std::string& name, int a, int b, int c, int A, int B, int C)
        : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C) {
    }

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
        : Triangle("Прямоугольный треугольник", a, b, c, A, B, 90) {
    }
};

// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : Triangle("Равнобедренный треугольник", a, b, a, A, B, A) {
    }
};

// Равносторонний треугольник
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side)
        : Triangle("Равносторонний треугольник", side, side, side, 60, 60, 60) {
    }
};

// Класс Quadrangle
class Quadrangle : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangle(const std::string& name, int a, int b, int c, int d, int A, int B, int C, int D)
        : Figure(name), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    }

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
        : Quadrangle("Прямоугольник", a, b, a, b, 90, 90, 90, 90) {
    }
};

// Квадрат
class Square : public Rectangle {
public:
    Square(int a) : Rectangle(a, a) {
        // Можно не менять name, он уже "Квадрат" если захотим, можем переопределить вот так:
        const_cast<std::string&>(this->name) = "Квадрат";
    }
};

// Параллелограмм
class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B)
        : Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {
    }
};

// Ромб
class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B)
        : Parallelogram(a, a, A, B) {
        // Можно не менять name, он уже "Ромб" если передадим это в Quadrangle через Parallelogram
        const_cast<std::string&>(this->name) = "Ромб";
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
    Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);

    Quadrangle quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
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