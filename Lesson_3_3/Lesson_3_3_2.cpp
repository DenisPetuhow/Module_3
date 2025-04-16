
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
    Address(const std::string& city, const std::string& street, int house, int apartment)
        :city(city), street(street), house(house), apartment(apartment) {
    }
    // Формирование строки адреса
    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }

    std::string get_city() const {
        return city;
    }


};

    void bubble_sort(Address** addresses, int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (addresses[j]->get_city() < addresses[j + 1]->get_city()) {
                    Address* temp = addresses[j];
                    addresses[j] = addresses[j + 1];
                    addresses[j + 1] = temp;
                }
            }
        }
    }

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

    // Создание динамического массива
    Address** addresses = new Address * [n];

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int house, apartment;

        std::getline(input, city);
        std::getline(input, street);
        input >> house;
        input >> apartment;
        input.ignore(); // Считываем перевод строки после apartment

        // Создаём объект и сохраняем указатель в массив
        addresses[i] = new Address(city, street, house, apartment);
    }

    std::cout << "Считанные адреса:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << addresses[i]->get_output_address() << std::endl;
    }

    // Сортировка адресов по названию города методом пузырька
    bubble_sort(addresses, n);

    // Запись в out.txt в обратном порядке
    output << n << std::endl;
    for (int i = n - 1; i >= 0; --i) {
        output << addresses[i]->get_output_address() << std::endl;
    }

    // Очистка памяти
    for (int i = 0; i < n; ++i) {
        delete addresses[i];
    }
    delete[] addresses;

    input.close();
    output.close();

    return 0;
}
