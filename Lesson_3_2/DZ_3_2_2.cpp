#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
private:
    int value; // Приватное поле, нельзя изменить напрямую

public:
    Counter() {
        value = 1;
    }

    Counter(int initialValue) {
        value = initialValue;
    }

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

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
        else {
            counter = Counter(); // Используем значение по умолчанию
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