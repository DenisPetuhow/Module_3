#include <iostream>
#include <string>
#include <Windows.h>

struct bad_length {};

// Более корректно возвращать size_t, чтобы не было предупреждения
int function(std::string str, int forbidden_length) {
    if (str.length() == static_cast<size_t>(forbidden_length)) {
        throw bad_length();
    }
    return static_cast<int>(str.length());
}

int main() {
    SetConsoleCP(1251);     
    SetConsoleOutputCP(1251);
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::cin.ignore();

    while (true) {
        std::string word;
        std::cout << "Введите слово: ";
        std::getline(std::cin, word);

        try {
            size_t len = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\" равна " << len << std::endl;
        }
        catch (bad_length&) {
            std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break;
        }
    }

    return 0;
}