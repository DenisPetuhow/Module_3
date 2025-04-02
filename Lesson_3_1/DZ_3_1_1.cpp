#include <iostream>

int main()
{
    std::setlocale(LC_CTYPE, "rus");

    int number { 0 };
    int result { 0 };
    do
    {
        std::cout <<"Введите целое число или число '0 " << std::endl;
        std::cin >> number;
        result += number;

    } while(number != 0);
    std::cout <<"Сумма: "<< result <<std::endl;
    
    return 0;
}