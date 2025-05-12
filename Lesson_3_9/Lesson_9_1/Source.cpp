#include "iostream"
#include <Windows.h>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::cout << "Введите имя: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Здравствуйте, " << name << "!" << std::endl;
    system("pause");

	return 0;
}