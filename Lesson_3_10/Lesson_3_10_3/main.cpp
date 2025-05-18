#include <iostream>
#include <string>
#include <Windows.h>

#include "Leaver.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DynamicAnswer::Leaver leaver;  // Создание объекта класса

	std::string name;
	std::cout << "Введите имя: ";
	std::getline(std::cin, name);  // Безопасный ввод строки

	// Вызов метода leave и вывод результата
	std::string message2 = leaver.leave(name);
	std::cout << message2 << std::endl;

	return 0;
}