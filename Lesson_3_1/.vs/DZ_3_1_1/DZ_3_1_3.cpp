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

// ������� ��� ��������� ������� �����
void printStruct(Address* m_ptr) {
    std::cout << "�����: " << m_ptr->nameCity << std::endl;
    std::cout << "�����: " << m_ptr->nameStreet << std::endl;
    std::cout << "���: " << m_ptr->numberHouse << std::endl;
    std::cout << "��������: " << m_ptr->numberKv << std::endl;
    std::cout << "������: " << m_ptr->numberIndex << std::endl;
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);         // ��� ��������� ������� �������� � �������
    SetConsoleOutputCP(1251);

    Address first = { "������", "�����", 12, 8, 123456 };
    Address second = { "������", "�������", 59, 143, 953769 };
    printStruct(&first);
    printStruct(&second);

    return 0;
}
