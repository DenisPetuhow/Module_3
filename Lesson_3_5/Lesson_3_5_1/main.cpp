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
        case Den::сумма:
            Den::sum(number1, number2);
            break;
        case Den::вычитание:
            Den::different(number1, number2);
            break;
        case Den::умножение:
            Den::multiplication(number1, number2);
            break;
        case Den::деление:
            Den::division(number1, number2);
            break;
        case Den::степень:
            Den::degree(number1, number2);
            break;
        }
        std::cout << "Хотите продолжить, введите y , иначе n: " << std::endl;
        std::cin >> message;

    } while (message != 'n');

    return 0;
}
