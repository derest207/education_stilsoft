#include <iostream>

int main()
{
    int a{0}, b{0};
    std::cout << "Input first number ";
    std::cin >> a;
    std::cout << "Input second number ";
    std::cin >> b;
    std::cout << "a+b=" << a + b << ", a-b=" << a - b << ", b-a=" << b - a;
}