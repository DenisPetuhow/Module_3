#include "ExtArray.h" // Подключаем наш заголовочный файл
#include <cassert>    // Для assert
#include <iostream>
#include <stdexcept>

// Функция для проверки корректности работы методов с непустыми массивами
void test_non_empty_array() {
    std::cout << "Testing non-empty array..." << std::endl;

    // Тест конструктора со списком инициализации
    ExtArray<int> arr1 = { 1, 2, 3, 4, 5 };
    assert(arr1.size() == 5);

    // Тест оператора []
    assert(arr1[0] == 1);
    assert(arr1[4] == 5);

    // Тест mean (среднее значение)
    assert(arr1.mean() == 3.0);

    // Тест median (медиана)
    assert(arr1.median() == 3.0);

    // Тест mode (мода)
    auto mode_result = arr1.mode();
    assert(mode_result.first == 1);  // Мода равна 1 (или любому другому элементу для данного набора)
    assert(mode_result.second == 1); // Каждый элемент встречается 1 раз

    // Дополнительный тест для моды с повторяющимися элементами
    ExtArray<int> arr2 = { 1, 2, 2, 3, 4, 2 };
    mode_result = arr2.mode();
    assert(mode_result.first == 2);  // Мода должна быть 2
    assert(mode_result.second == 3); // Элемент 2 встречается 3 раза

    std::cout << "Non-empty array tests passed!" << std::endl;
}

// Функция для проверки корректности работы методов с пустыми массивами
void test_empty_array() {
    std::cout << "Testing empty array..." << std::endl;

    // Создаем пустой массив с размером 0
    ExtArray<int> empty_arr(0);
    assert(empty_arr.size() == 0);

    // Тест mean для пустого массива
    // Добавляем обработку ошибок, если метод mean не обрабатывает пустые массивы
    try {
        double mean_value = empty_arr.mean();
        // Если метод не бросает исключение, то ожидаем результат 0
        assert(mean_value == 0);
        std::cout << "Mean for empty array: " << mean_value << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error in mean method for empty array: " << e.what() << std::endl;
        assert(false); // Тест не пройден, если было исключение
    }

    // Тест median для пустого массива
    try {
        double median_value = empty_arr.median();
        // Если метод не бросает исключение, то ожидаем результат 0
        assert(median_value == 0);
        std::cout << "Median for empty array: " << median_value << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error in median method for empty array: " << e.what() << std::endl;
        assert(false); // Тест не пройден, если было исключение
    }

    // Тест mode для пустого массива
    try {
        auto mode_result = empty_arr.mode();
        // Если метод не бросает исключение, то ожидаем результат (0,0)
        assert(mode_result.first == 0);
        assert(mode_result.second == 0);
        std::cout << "Mode for empty array: (" << mode_result.first
            << ", " << mode_result.second << ")" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error in mode method for empty array: " << e.what() << std::endl;
        assert(false); // Тест не пройден, если было исключение
    }

    std::cout << "Empty array tests passed!" << std::endl;
}

// Функция для запуска всех тестов
void run_all_tests() {
    test_non_empty_array();
    test_empty_array();

    std::cout << "All tests passed successfully!" << std::endl;
}