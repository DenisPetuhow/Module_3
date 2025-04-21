/*
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

class Address {
private:
    std::string city;
    std::string street;
    int house;
    int apartment;

public:
    // Конструктор
    Address() : city(""), street(""), house(0), apartment(0) {}
    Address(const std::string& city, const std::string& street, int house, int apartment)
        : city(city), street(street), house(house), apartment(apartment) {
    }

    // Формирование строки адреса
    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};

int main() {
    SetConsoleCP(1251);         // Для поддержки русских символов в консоли
    SetConsoleOutputCP(1251);

    std::ifstream input("in.txt");
    std::ofstream output("out.txt");
    if (!input.is_open() || !output.is_open()) {
        std::cerr << "Ошибка при открытии файлов!" << std::endl;
        return 1;
    }

    int n;
    input >> n;
    input.ignore(); // Пропускаем перевод строки после N

    // Выделяем память под массив объектов Address
    Address* addresses = new Address[n];

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int house, apartment;

        // Считываем данные из файла
        std::getline(input, city);
        std::getline(input, street);
        input >> house >> apartment;
        input.ignore(); // Пропускаем перевод строки после числа apartment

        // Инициализируем объект по индексу массива
        addresses[i] = Address(city, street, house, apartment);
    }

    // Вывод считанных адресов на экран
    std::cout << "Считанные адреса:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << addresses[i].get_output_address() << std::endl;
    }

    // Запись в out.txt в обратном порядке
    output << n << std::endl;
    for (int i = n - 1; i >= 0; --i) {
        output << addresses[i].get_output_address() << std::endl;
    }

    // Освобождение памяти, выделенной под массив
    delete[] addresses;

    input.close();
    output.close();

    return 0;
}
*/