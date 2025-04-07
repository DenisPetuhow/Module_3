/*
#include <iostream>
#include <Windows.h>

class Calculator
{
public:
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1;}
    double divide_1_2() {return num1 / num2;}
    double divide_2_1() {  return num2 / num1;}
    bool set_num1(double m_num1) {
        if (m_num1 != 0) {
            this->num1 = m_num1;
            return true;
        }
        return false;
    }
    bool set_num2(double m_num2) {
        if (m_num2 != 0) {
            this->num2 = m_num2;
            return true;
        }
        return false;
    }
    //Calculator (){}
private:
    double num1;
    double num2;

};

int main()
{
    SetConsoleCP(1251);         // Для поддержки русских символов в консоли
    SetConsoleOutputCP(1251);
    Calculator calc;
    double inputNumber1, inputNumber2;
    char choice { };
    do {
        std::cout << "Введите num1: ";
        std::cin >> inputNumber1;
        while (!calc.set_num1(inputNumber1)) {
            std::cout << "Неверный ввод! num1 не должен быть равен 0.\n";
            std::cout << "Введите num1: ";
            std::cin >> inputNumber1;
        }
        std::cout << "Введите num2: ";
        std::cin >> inputNumber2;
        while (!calc.set_num2(inputNumber2)) {
            std::cout << "Неверный ввод! num2 не должен быть равен 0.\n";
            std::cout << "Введите num2: ";
            std::cin >> inputNumber2;
        }
        std::cout << "num1 + num2 = " << calc.add() << "\n";
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
        std::cout << "num1 * num2 = " << calc.multiply() << "\n";
        std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";

        // Спрашиваем, хочет ли пользователь продолжить
        std::cout << "\nХотите продолжить? (Введите 'y' для продолжения или 'n' для выхода): ";
        std::cin >> choice;
    } while (choice != 'n' && choice != 'N');
    std::cout << "Программа завершена.\n";
    return 0;
}
*/