#include <iostream>
#include <string>
#include "Greeter.h"

int main() {
	Answer::Greeter greeter;  // Создание объекта класса

	std::string name;
	std::cout << "Введите имя: ";
	std::getline(std::cin, name);  // Безопасный ввод строки

	// Вызов метода greet и вывод результата
	std::string message = greeter.greet(name);
	std::cout << message << std::endl;

	return 0;
}