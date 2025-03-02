//Напишите следующую программу : Пользователя просят ввести 2 числа с плавающей запятой(используйте тип double).
//Затем пользователя просят ввести один из следующих математических символов : +, -, * или / .
//Программа вычисляет ответ, исходя из этих двух чисел, введенных пользователем, и печатает результаты в консоль.
//Если пользователь вводит неверный символ, программа не должна ничего печатать.
#include <iostream>
#include <string>
int main() {
	std::string operation{};
	double a{}, b{};
	std::cout << "Input first number ";
	std::cin >> a;
	std::cout << "Input second number ";
	std::cin >> b;
	std::cout << "Input operation ";
	std::cin >> operation;
	if (operation == "+") std::cout << a + b;
	else if (operation == "-") std::cout << a - b;
	else if (operation == "*") std::cout << a * b;
	else if (operation == "/") std::cout << a / b;
	else return 0;
}