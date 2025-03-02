#include <iostream>
const double g = 9.8;
double s(int time) {
    return g * time * time / 2;
}

double correct_height() {
    double height;
    std::cout << "Input height: ";
    std::cin >> height;
    while (std::cin.fail() || height <= 0) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Input correct height: ";
        std::cin >> height;
    }
    return height;
}
int main()
{
    double height = correct_height();
    int time{-1};
    while (height > s(++time)) {
        std::cout << "At " << time << " seconds, the ball is at height: " << height - s(time) << "\n";
    }
    std::cout << "At " << time << " seconds, the ball on ground";
}