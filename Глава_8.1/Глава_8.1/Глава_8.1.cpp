//1) Напишите шаблон функции с именем add, который позволяет пользователям складывать 2 значения одного типа.
//2) Напишите шаблон функции с именем mult, который позволяет пользователю умножать одно значение любого типа на число int.
//3) Напишите шаблон функции с именем sub, который позволяет пользователю вычитать два значения разных типов.
#include <iostream>
template <typename T> 
T add(T x, T y) {
	return x + y;
}
template <typename T>
T mult(T x, int y) {
	return x * y;

}
template <typename T, typename U>
auto sub(T x, U y) {
	return x-y;
}
int main()
{
	std::cout << "1)" << '\n';//1
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';
	std::cout << "2)" << '\n';//2
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';
	std::cout << "3)" << '\n';//3
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
	return 0;
}
