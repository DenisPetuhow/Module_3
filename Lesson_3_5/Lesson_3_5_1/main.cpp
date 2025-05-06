#include "mathden.h"

int main()
{
    std::setlocale(LC_CTYPE, "rus");
    double number1{}, number2{};
    int operation_input{};
    char message{};
    std::cout << "Введите первое число: ";
    std::cin >> number1;
    std::cout << "Введите второе число: ";
    std::cin >> number2;
    do {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operation_input;
        Den::math_operation operation = static_cast<Den::math_operation>(operation_input);
        switch (operation) {
        case Den::math_operation::sum:
            std::cout << number1 << " прибавить " << number2 << " = " << Den::sum(number1, number2) << std::endl;
            break;
        case Den::math_operation::difference:
            std::cout << number1 << " вычесть " << number2 << " = " << Den::difference(number1, number2) << std::endl;
            break;
        case Den::math_operation::multiplication:
            std::cout << number1 << " умножить на  " << number2 << " = " << Den::multiplication(number1, number2) << std::endl;
            break;
        case Den::math_operation::division:
            std::cout << number1 << " разделить на " << number2 << " = " << Den::division(number1, number2) << std::endl;
            break;
        case Den::math_operation::degree:
            std::cout << number1 << " в степени " << number2 << " = " << Den::degree(number1, number2) << std::endl;
            break;
        }
        std::cout << "Хотите продолжить, введите y , иначе n: " << std::endl;
        std::cin >> message;

    } while (message != 'n');

    return 0;
}
