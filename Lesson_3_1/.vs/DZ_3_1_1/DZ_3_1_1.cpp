/*#include <iostream>

enum class Month
{
    ������ = 1,
    �������,
    ����,
    ������,
    ���,
    ����,
    ����,
    ������,
    ��������,
    �������,
    ������,
    �������

};
int main()
{
    std::setlocale(LC_CTYPE, "rus");

    int number;
    do
    {
        std::cout << " ������� ����� ������: " << std::endl;
        std::cin >> number;
        Month numberMonth = static_cast<Month>(number); //��������� ����� ��������� ������ ����� ������� 
        if (number == 0) {
            std::cout << "������������ �����!" << std::endl;
            break;
        }
        switch (numberMonth) {
            {
        case Month::������:
            std::cout << "������" << std::endl;
            break;
        case Month::�������:
            std::cout << "�������" << std::endl;
            break;
        case Month::����:
            std::cout << "����" << std::endl;
            break;
        case Month::������:
            std::cout << "������" << std::endl;
            break;
        case Month::���:
            std::cout << "���" << std::endl;
            break;
        case Month::����:
            std::cout << "����" << std::endl;
            break;
        case Month::����:
            std::cout << "����" << std::endl;
            break;
        case Month::������:
            std::cout << "������" << std::endl;
            break;
        case Month::��������:
            std::cout << "��������" << std::endl;
            break;
        case Month::�������:
            std::cout << "�������" << std::endl;
            break;
        case Month::������:
            std::cout << "������" << std::endl;
            break;
        case Month::�������:
            std::cout << "�������" << std::endl;
            break;
            }
        }
    } while (number <= 12);

    return 0;
}
*/