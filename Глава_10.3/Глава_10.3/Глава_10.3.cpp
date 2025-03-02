// Напишите свою собственную функцию для обмена значениями двух целочисленных переменных.
// Напишите функцию main(),чтобы проверить ее.
#include <iostream>
void replace(int &a, int &b) {
    int c = a; a = b; b = c;
}
int main()
{
    int a{ 123 }, b{ 321 };
    std::cout << "a = " << a << ", b = " << b << "\n";
    replace(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";
}
