/*#include <iostream>

enum class Month
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь

};
int main()
{
    std::setlocale(LC_CTYPE, "rus");

    int number;
    do
    {
        std::cout << " Введите номер месяца: " << std::endl;
        std::cin >> number;
        Month numberMonth = static_cast<Month>(number); //Переводим чтобы экземпляр принял номер индекса 
        if (number == 0) {
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
        switch (numberMonth) {
            {
        case Month::Январь:
            std::cout << "Январь" << std::endl;
            break;
        case Month::Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case Month::Март:
            std::cout << "Март" << std::endl;
            break;
        case Month::Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case Month::Май:
            std::cout << "Май" << std::endl;
            break;
        case Month::Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case Month::Июль:
            std::cout << "Июль" << std::endl;
            break;
        case Month::Август:
            std::cout << "Август" << std::endl;
            break;
        case Month::Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case Month::Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;
        case Month::Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;
        case Month::Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;
            }
        }
    } while (number <= 12);

    return 0;
}
*/