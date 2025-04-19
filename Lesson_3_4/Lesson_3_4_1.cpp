/* //Когда поля в род классе protected а не private
#include <iostream>
#include <string>

// Базовый класс Figure (Фигура)
class Figure {
protected:
    int sides_count;    // Количество сторон (доступно только в наследниках)
    std::string name;   // Название фигуры (доступно только в наследниках)

public:
    // Конструктор базового класса
    Figure() : sides_count(0), name("Фигура") {}

    // Метод для получения количества сторон
    int get_sides_count() const {
        return sides_count;
    }

    // Метод для получения названия фигуры
    std::string get_name() const {
        return name;
    }
};

// Класс Triangle (Треугольник), наследуется от Figure
class Triangle : public Figure {
public:
    Triangle() {
        sides_count = 3;
        name = "Треугольник";
    }
};

// Класс Quadrangle (Четырёхугольник), наследуется от Figure
class Quadrangle : public Figure {
public:
    Quadrangle() {
        sides_count = 4;
        name = "Четырёхугольник";
    }
};

int main() {
    std::setlocale(LC_CTYPE, "rus");
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
*/
/* // Когда два конструктора с разной областью видимости
#include <iostream>
#include <string>

// Базовый класс Figure (Фигура)
class Figure {
private:
    int sides_count;    // Количество сторон (доступно только в наследниках)
    std::string name;   // Название фигуры (доступно только в наследниках)

protected:
    Figure(int sides, std::string m_name) : sides_count(sides), name(m_name) {}

public:
    // Конструктор базового класса
    Figure() : Figure(0, "Фигура") {}

    // Метод для получения количества сторон
    int get_sides_count() const {
        return sides_count;
    }

    // Метод для получения названия фигуры
    std::string get_name() const {
        return name;
    }
};

// Класс Triangle (Треугольник), наследуется от Figure
class Triangle : public Figure {
public:
    Triangle() : Figure(0, "Треугольник") {}
};

// Класс Quadrangle (Четырёхугольник), наследуется от Figure
class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(0, "Четырехугольник") {}
};

int main() {
    std::setlocale(LC_CTYPE, "rus");
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
*/