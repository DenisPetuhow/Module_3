#pragma once
#include <utility>
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class ExtArray
{
private:
    std::vector<T> extended_array;
    size_t _size;
public:
    ExtArray(std::initializer_list<T> l) : extended_array(l)
    {
        _size = l.size();
    }

    ExtArray(int size) : _size(size)
    {
        extended_array.resize(_size);
    }

    T& operator[](size_t index)
    {
        return extended_array[index];
    }

    size_t size()
    {
        return _size;
    }

    double mean()
    {
        if (_size == 0) {
            return 0; // Возвращаем 0 для пустого массива
        }

        double sum = 0;
        for (size_t i = 0; i < _size; i++)
        {
            sum += extended_array[i];
        }
        return sum / _size;
    }

    double mean(size_t start_idx, size_t end_idx)
    {
        // Проверка на корректность переданных индексов
        if (start_idx >= end_idx) {
            // Выбрасываем исключение, если начальный индекс больше или равен конечному
            throw std::invalid_argument("Start index must be less than end index");
        }

        // Проверка на выход за границы массива
        if (end_idx > _size) {
            throw std::out_of_range("End index is out of array bounds");
        }

        // Если массив пустой, возвращаем 0
        if (_size == 0) {
            return 0;
        }

        // Вычисляем сумму элементов в указанном диапазоне
        double sum = 0;
        for (size_t i = start_idx; i < end_idx; i++) {
            sum += extended_array[i];
        }

        // Возвращаем среднее арифметическое
        return sum / (end_idx - start_idx);
    }

    double median()
    {
        if (_size == 0) {
            return 0; // Возвращаем 0 для пустого массива
        }

        std::vector<T> temp_array;
        std::copy(extended_array.begin(), extended_array.end(), back_inserter(temp_array));
        std::sort(temp_array.begin(), temp_array.end());
        if (_size % 2 == 1)
        {
            return temp_array[_size / 2];
        }
        else
        {
            return static_cast<double>(temp_array[(_size / 2) - 1] + temp_array[_size / 2]) / 2;
        }
    }

    std::pair<T, int> mode()
    {
        if (_size == 0) {
            return std::pair<T, int>(0, 0); // Возвращаем (0,0) для пустого массива
        }

        T max = extended_array[0], cmax = 0, rmax = 0;
        for (int i = 0; i < _size; i++)
        {
            if (cmax > rmax)
            {
                rmax = cmax;
                max = extended_array[i - 1];
            }
            cmax = 0;
            for (int j = i; j < _size; j++)
            {
                if (extended_array[j] == extended_array[i])
                {
                    cmax++;
                }
            }
        }
        // Проверим последний элемент
        if (cmax > rmax) {
            rmax = cmax;
            max = extended_array[_size - 1];
        }
        return std::pair<T, int>(max, rmax);
    }

    size_t checkSum() const //3 задание
{
    // Проверка, что тип данных массива - bool или int
    if (!std::is_same<T, bool>::value && !std::is_same<T, int>::value) {
        throw std::bad_typeid(); // Выбрасываем исключение, если тип не bool и не int
    }
    
    // Для массива типа int проверяем, что он содержит только 0 и 1
    if (std::is_same<T, int>::value) {
        for (size_t i = 0; i < _size; i++) {
            if (extended_array[i] != 0 && extended_array[i] != 1) {
                throw std::logic_error("Integer array contains values other than 0 and 1");
            }
        }
    }
    
    // Подсчет количества единиц (true для bool, 1 для int)
    size_t count = 0;
    for (size_t i = 0; i < _size; i++) {
        if (extended_array[i]) {
            count++;
        }
    }
    
    return count;
}


};
