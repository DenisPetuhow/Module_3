#include <iostream>
#include <string>
#include <Windows.h>


struct Address
{
    std::string nameCity;       
    std::string nameStreet;   
    int numberHouse; 
    int numberKv;
    int numberIndex;
};

// Функция для изменения баланса счёта
void printStruct(Address* m_ptr) {
    std::cout << "Город: " << m_ptr->nameCity << std::endl;
    std::cout << "Улица: " << m_ptr->nameStreet << std::endl;
    std::cout << "Дом: " << m_ptr->numberHouse << std::endl;
    std::cout << "Квартира: " << m_ptr->numberKv << std::endl;
    std::cout << "Индекс: " << m_ptr->numberIndex << std::endl;
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);         // Для поддержки русских символов в консоли
    SetConsoleOutputCP(1251);

    Address first = { "Москва", "Арбат", 12, 8, 123456 };
    Address second = { "Ижевск", "Пушкина", 59, 143, 953769 };
    printStruct(&first);
    printStruct(&second);

    return 0;
}
