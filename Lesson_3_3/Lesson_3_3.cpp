/* // ������
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
    // �����������
    Address(const std::string& city, const std::string& street, int house, int apartment) 
        :city(city), street(street), house(house), apartment(apartment) {} 
    // ������������ ������ ������
    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};
int main() {

    SetConsoleCP(1251);         // ��� ��������� ������� �������� � �������
    SetConsoleOutputCP(1251);
    std::ifstream input("in.txt");
    std::ofstream output("out.txt");
    if (!input.is_open() || !output.is_open()) {
        std::cerr << "������ ��� �������� ������!" << std::endl;
        return 1;
    }
    int n;
    input >> n;
    input.ignore(); // ���������� ������� ������ ����� N

    // �������� ������������� �������
    Address** addresses = new Address * [n];

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int house, apartment;

        std::getline(input, city);
        std::getline(input, street);
        input >> house;
        input >> apartment;
        input.ignore(); // ��������� ������� ������ ����� apartment

        // ������ ������ � ��������� ��������� � ������
        addresses[i] = new Address(city, street, house, apartment);
    }
       
    std::cout << "��������� ������:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << addresses[i]->get_output_address() << std::endl;
    }
    // ������ � out.txt � �������� �������
    output << n << std::endl;
    for (int i = n - 1; i >= 0; --i) {
        output << addresses[i]->get_output_address() << std::endl;
    }

    // ������� ������
    for (int i = 0; i < n; ++i) {
        delete addresses[i];
    }
    delete[] addresses;

    input.close();
    output.close();

    return 0;
}
*/

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
    // �����������
    Address(const std::string& city, const std::string& street, int house, int apartment)
        :city(city), street(street), house(house), apartment(apartment) {}
    // ������������ ������ ������
    std::string get_output_address() const {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};
int main() {

    SetConsoleCP(1251);         // ��� ��������� ������� �������� � �������
    SetConsoleOutputCP(1251);
    std::ifstream input("in.txt");
    std::ofstream output("out.txt");
    if (!input.is_open() || !output.is_open()) {
        std::cerr << "������ ��� �������� ������!" << std::endl;
        return 1;
    }
    int n;
    input >> n;
    input.ignore(); // ���������� ������� ������ ����� N

    // �������� ������������� �������
    Address** addresses = new Address * [n];

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int house, apartment;

        std::getline(input, city);
        std::getline(input, street);
        input >> house;
        input >> apartment;
        input.ignore(); // ��������� ������� ������ ����� apartment

        // ������ ������ � ��������� ��������� � ������
        addresses[i] = new Address(city, street, house, apartment);
    }

    std::cout << "��������� ������:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << addresses[i]->get_output_address() << std::endl;
    }
    // ������ � out.txt � �������� �������
    output << n << std::endl;
    for (int i = n - 1; i >= 0; --i) {
        output << addresses[i]->get_output_address() << std::endl;
    }

    // ������� ������
    for (int i = 0; i < n; ++i) {
        delete addresses[i];
    }
    delete[] addresses;

    input.close();
    output.close();

    return 0;
}
*/