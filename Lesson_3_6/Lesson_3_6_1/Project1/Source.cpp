#include <iostream>


#define MODE 1
#ifndef MODE
#error Define MODE
#endif


#if MODE == 1
void add(int m_number1, int m_number2) {
    std::cout << "Результат сложение: " << m_number1 + m_number2 << std::endl;
    
}
#endif

int main() {
    std::setlocale(LC_CTYPE, "rus");
    #if MODE == 0
        std::cout << "Работаю в режиме тренировки " << std::endl;
    #elif MODE == 1
        std::cout << "Работаю в боевом режиме " << std::endl;
        int number1, number2;
        std::cout << "Введите число 1: ";
        std::cin >> number1;
        std::cout << "Введите число 2: ";
        std::cin >> number2;
        add(number1, number2);
    #else 
        std::cout << "Неизвестный режим. Завершение работы " << std::endl;
    #endif

   // std::cout << MODE << std::endl;


    return 0;
}