#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
private:
    int value; // ��������� ����, ������ �������� ��������

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
        SetConsoleCP(1251);         // ��� ��������� ������� �������� � �������
        SetConsoleOutputCP(1251);

        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> input;

        if (input == "��" || input == "��") {
            int startValue;
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> startValue;
            counter = Counter(startValue);
        }
        else {
            counter = Counter(); // ���������� �������� �� ���������
        }

        char command;
        do {
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                std::cout << "�� ��������!" << std::endl;
            }
            else {
                std::cout << "����������� �������. ���������� �����." << std::endl;
            }

        } while (command != 'x');

        return 0;
    }