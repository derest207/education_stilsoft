#include <iostream>
#include <iterator>
#include <vector>
// array - это массив для поиска.
// target - это значение, которое мы пытаемся определить, есть оно или нет.
// min - это индекс нижней границы массива, в котором мы ищем.
// max - это индекс верхней границы массива, в котором мы ищем.
// binarySearch() должна возвращать индекс целевого элемента, если target найден, иначе -1
int binarySearch(std::vector<int> array, int target, int min, int max)
{
    std::vector<int> array_recurs;
    if (min != max) {
        if (array[min+(max-min)/2] < target) {
            min = min + (max - min) / 2 + 1;
        }
        else if (array[min + (max - min) / 2] > target) {
            max = min + (max - min) / 2 - 1;
        }
        else {
            return min + (max - min) / 2;
        }
    }
    else if (array[min]==target) return min;
    else return -1;
    return binarySearch(array, target, min, max);
}

int main()
{
    std::vector<int> array{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
    
    // Мы собираемся протестировать набор значений, чтобы увидеть,
    // дают ли они ожидаемые результаты
    constexpr int numTestValues{ 9 };
    // Вот тестовые значения
    constexpr int testValues[numTestValues]{ 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    // А вот ожидаемые результаты для каждого значения
    int expectedValues[numTestValues]{ -1, 0, 3, -1, -1, 8, -1, 13, -1 };

    // Перебираем все тестовые значения
    for (int count{ 0 }; count < numTestValues; ++count)
    {
        // Смотрим, есть ли наше тестовое значение в массиве
        int index{ binarySearch(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1) };
        // Если результат соответствует ожидаемому, тогда отлично!
        if (index == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed!\n";
        else // иначе наша функция binarySearch() не работает
            std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
    }

    return 0;
}