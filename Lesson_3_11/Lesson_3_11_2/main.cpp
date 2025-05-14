#include "ExtArray.h"
#include <iostream>

// Объявление функции запуска всех тестов из test_extarray.cpp
void run_all_tests();

int main() {
    std::cout << "Running ExtArray tests..." << std::endl;

    // Запуск всех тестов
    run_all_tests();

    // Демонстрация использования класса ExtArray
    ExtArray<int> arr = { 5, 2, 7, 1, 3 };

    std::cout << "\nDemonstration of ExtArray usage:" << std::endl;
    std::cout << "Array elements: ";
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mean value: " << arr.mean() << std::endl;
    std::cout << "Median value: " << arr.median() << std::endl;

    auto mode_result = arr.mode();
    std::cout << "Mode value: " << mode_result.first
        << " (occurs " << mode_result.second << " times)" << std::endl;

    return 0;
}