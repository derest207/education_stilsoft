#include <string>
#include <iostream>
int readNumber()
{
	int num{0};
	std::cin >> num;
	return num;
}
void writeAnswer(std::string questions)
{
	std::cout << questions+" ";
}