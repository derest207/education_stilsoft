// Напишите следующую программу: создайте структуру, содержащую имя студента и его оценку (по шкале от 0 до 100).
// Спросите пользователя, сколько студентов он хочет ввести. Создайте std::vector для хранения данных всех студентов. 
// Затем запросите у пользователя каждое имя и оценку. После того, как пользователь ввел все пары имен и оценок, 
// отсортируйте список по оценкам (сначала самая высокая). Затем выведите все имена и оценки в отсортированном порядке.
#include <algorithm>
#include <iostream>
#include <vector>
struct student {
    std::string name = "";
    int grade{0};
};
bool max_grade(student a, student b) {
    return a.grade > b.grade;
}
std::vector<student> sorter(std::vector<student> students) {
    std::sort(students.begin(), students.end(), max_grade);
    return students;
}
void print(std::vector<student> students) {
    for (int i{ 0 }; i < students.size(); i++) {
        std::cout << students.at(i).name << " got a grade of " << students.at(i).grade << "\n";
    }
}
int main()
{
    int count_students{};
    std::cout << "Input count students\n";
    std::cin >> count_students;
    std::vector<student> students;
    students.resize(count_students);
    for (int i{ 0 }; i < count_students; i++) {
        std::cout << "Input name " << i + 1 << " student\n";
        std::cin >> students.at(i).name;
        std::cout << "Input grade " << i + 1 << " student\n";
        std::cin >> students.at(i).grade;
    }
    print(sorter(students));
}
