#include <iostream>
#include <string>
#include "io.h"
int main()
{
    writeAnswer("Input first number");
    a = readNumber();
    writeAnswer("Input second number");
    b = readNumber();
    writeAnswer(std::to_string(a+b));
}
