// Глава_6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    std::cout << x;
    std::cout << std::cin.fail();
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin >> x;
    std::cout << x;
}

