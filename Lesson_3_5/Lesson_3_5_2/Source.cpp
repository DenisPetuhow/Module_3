#include <Windows.h>
#include <iostream>
#include <string>
#include "counter.h"

int main() {
    Counter counter;
    std::string input;
    SetConsoleCP(1251);         // Для поддержки русских символов в консоли
    SetConsoleOutputCP(1251);

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> input;

    if (input == "да" || input == "Да") {
        int startValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> startValue;
        counter = Counter(startValue);
    }


    char command;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        }
        else if (command == '-') {
            counter.decrement();
        }
        else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
        }
        else {
            std::cout << "Неизвестная команда. Попробуйте снова." << std::endl;
        }

    } while (command != 'x');

    return 0;
}