//Представьте, что вы пишете игру, в которой игрок может держать в руках 3 типа предметов:
//зелья здоровья (health potion), факелы (torch) и стрелы (arrow). 
//Создайте перечисление для идентификации различных типов элементов и массив std::array
//для хранения количества единиц каждого элемента, который несет игрок
//(перечислители используются в качестве индексов массива).
//Игрок должен начать с 2 зельями здоровья, 5 факелами и 10 стрелами.
//Напишите функцию countTotalItems(), которая возвращает общее количество элементов, которые есть у игрока.
//Заставьте вашу функцию main() распечатать выходное значение countTotalItems(), а также количество факелов.
#include <iostream>
#include <array>
const int count_name_items{3};
enum items {
    torch,
    health_potion,
    arrow
};
int countTotalItems(std::array<int, count_name_items> count_items) {
    int count{ 0 };
    for (int i{0}; i < count_items.size(); i++) {
        count += count_items.at(i);
    }
    return count;
}
int main()
{
    std::array<int, count_name_items> count_items{5, 2, 10};
    std::cout << "All items count: " << countTotalItems(count_items) << "\n";
    std::cout << "Torch count: " << count_items.at(items::torch) << "\n";
}