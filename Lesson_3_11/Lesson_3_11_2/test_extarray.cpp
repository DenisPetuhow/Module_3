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

void test_mean_with_range() {
    std::cout << "Testing mean with range..." << std::endl;

    // Тест на корректной работе с диапазоном
    ExtArray<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Тест 1: Диапазон от 0 до 5 (элементы [1,2,3,4,5])
    double mean_range1 = arr.mean(0, 5);
    // Ожидаемое среднее: (1+2+3+4+5)/5 = 15/5 = 3.0
    assert(mean_range1 == 3.0);
    std::cout << "Test 1 passed: mean(0, 5) = " << mean_range1 << std::endl;

    // Тест 2: Диапазон от 5 до 10 (элементы [6,7,8,9,10])
    double mean_range2 = arr.mean(5, 10);
    // Ожидаемое среднее: (6+7+8+9+10)/5 = 40/5 = 8.0
    assert(mean_range2 == 8.0);
    std::cout << "Test 2 passed: mean(5, 10) = " << mean_range2 << std::endl;

    // Тест 3: Диапазон от 2 до 7 (элементы [3,4,5,6,7])
    double mean_range3 = arr.mean(2, 7);
    // Ожидаемое среднее: (3+4+5+6+7)/5 = 25/5 = 5.0
    assert(mean_range3 == 5.0);
    std::cout << "Test 3 passed: mean(2, 7) = " << mean_range3 << std::endl;

    // Тест 4: Проверка на выброс исключения при неправильном диапазоне (start_idx >= end_idx)
    bool exception_thrown = false;
    try {
        arr.mean(5, 5); // Начальный индекс равен конечному
    }
    catch (const std::invalid_argument& e) {
        exception_thrown = true;
        std::cout << "Expected exception caught: " << e.what() << std::endl;
    }
    assert(exception_thrown); // Должно быть выброшено исключение
    std::cout << "Test 4 passed: exception thrown for invalid range (start = end)" << std::endl;

    // Тест 5: Проверка на выброс исключения при неправильном диапазоне (start_idx > end_idx)
    exception_thrown = false;
    try {
        arr.mean(7, 3); // Начальный индекс больше конечного
    }
    catch (const std::invalid_argument& e) {
        exception_thrown = true;
        std::cout << "Expected exception caught: " << e.what() << std::endl;
    }
    assert(exception_thrown); // Должно быть выброшено исключение
    std::cout << "Test 5 passed: exception thrown for invalid range (start > end)" << std::endl;

    // Тест 6: Проверка на выброс исключения при выходе за границы массива
    exception_thrown = false;
    try {
        arr.mean(5, 15); // Конечный индекс больше размера массива
    }
    catch (const std::out_of_range& e) {
        exception_thrown = true;
        std::cout << "Expected exception caught: " << e.what() << std::endl;
    }
    assert(exception_thrown); // Должно быть выброшено исключение
    std::cout << "Test 6 passed: exception thrown for out of bounds range" << std::endl;

    std::cout << "All mean with range tests passed!" << std::endl;
}

void test_check_sum() {
    std::cout << "Testing checkSum method..." << std::endl;
    
    // Тест 1: Проверка работы с массивом типа bool
    ExtArray<bool> bool_arr = {true, false, true, true, false, true};
    size_t bool_sum = bool_arr.checkSum();
    // Ожидаемый результат: 4 (четыре значения true)
    assert(bool_sum == 4);
    std::cout << "Test 1 passed: checkSum for bool array = " << bool_sum << std::endl;
    
    // Тест 2: Проверка работы с массивом типа int, содержащим только 0 и 1
    ExtArray<int> valid_int_arr = {1, 0, 1, 0, 0, 1, 1};
    size_t int_sum = valid_int_arr.checkSum();
    // Ожидаемый результат: 4 (четыре значения 1)
    assert(int_sum == 4);
    std::cout << "Test 2 passed: checkSum for valid int array = " << int_sum << std::endl;
    
    // Тест 3: Проверка на выброс исключения при неправильном типе массива
    bool type_exception_thrown = false;
    try {
        ExtArray<double> double_arr = {1.0, 0.0, 1.0};
        double_arr.checkSum(); // Должно выбросить исключение
    } catch (const std::bad_typeid& e) {
        type_exception_thrown = true;
        std::cout << "Expected type exception caught" << std::endl;
    }
    assert(type_exception_thrown); // Должно быть выброшено исключение
    std::cout << "Test 3 passed: exception thrown for invalid array type" << std::endl;
    
    // Тест 4: Проверка на выброс исключения при значениях, отличных от 0 и 1 в int массиве
    bool logic_exception_thrown = false;
    try {
        ExtArray<int> invalid_int_arr = {1, 0, 2, 1}; // Содержит значение 2
        invalid_int_arr.checkSum(); // Должно выбросить исключение
    } catch (const std::logic_error& e) {
        logic_exception_thrown = true;
        std::cout << "Expected logic exception caught: " << e.what() << std::endl;
    }
    assert(logic_exception_thrown); // Должно быть выброшено исключение
    std::cout << "Test 4 passed: exception thrown for invalid int array values" << std::endl;
    
    // Тест 5: Проверка работы с пустым массивом
    ExtArray<bool> empty_bool_arr(0);
    size_t empty_sum = empty_bool_arr.checkSum();
    // Ожидаемый результат: 0 (нет элементов)
    assert(empty_sum == 0);
    std::cout << "Test 5 passed: checkSum for empty array = " << empty_sum << std::endl;
    
    // Тест 6: Проверка работы с массивом, содержащим только нули
    ExtArray<int> zeros_arr = {0, 0, 0, 0, 0};
    size_t zeros_sum = zeros_arr.checkSum();
    // Ожидаемый результат: 0 (нет единиц)
    assert(zeros_sum == 0);
    std::cout << "Test 6 passed: checkSum for array with only zeros = " << zeros_sum << std::endl;
    
    // Тест 7: Проверка работы с массивом, содержащим только единицы
    ExtArray<int> ones_arr = {1, 1, 1, 1, 1};
    size_t ones_sum = ones_arr.checkSum();
    // Ожидаемый результат: 5 (пять единиц)
    assert(ones_sum == 5);
    std::cout << "Test 7 passed: checkSum for array with only ones = " << ones_sum << std::endl;
    
    std::cout << "All checkSum tests passed!" << std::endl;
}


// Функция для запуска всех тестов
// Функция для запуска всех тестов
void run_all_tests() {
    test_non_empty_array();
    test_empty_array();
    test_mean_with_range(); // 2 задание
    test_check_sum(); // 3 задание Добавляем вызов нового теста

    std::cout << "All tests passed successfully!" << std::endl;
}