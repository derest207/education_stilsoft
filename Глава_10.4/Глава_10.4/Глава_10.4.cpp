// Блэк джек
#include <iostream>
#include <array>
#include <algorithm>
#include <random>
#include <cstdlib>
std::vector<std::string> start_koloda() {
    std::vector<std::string> koloda;
    koloda.resize(52);
    int i{ 0 };
    std::array<std::string, 4> masti = { "C","D","H","S" };
    std::array<std::string, 13> num = { "2","3","4","5","6","7","8","9","T","J","Q","K","A" };
    for (int j{ 0 }; j < 4; j++) {
        for (int k{ 0 }; k < 13; k++) {
            koloda.at(i++) = num.at(k) + masti.at(j);
        }
    }
    return koloda;
}
void sleep() {
    unsigned int count{ 0 };
    for (int i{ 0 }; i <= 9999999999999999999; i++) {
        count += i;
    }
}
void print_kol(std::vector<std::string>& koloda) {
    for (int i{ 0 }; i < 52; i++) {
        std::cout << koloda.at(i) << "\n";
    }
}
void shuffle(std::vector<std::string>& koloda) {
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(koloda.begin(), koloda.end(), mt);
}
int main()
{
    std::system("chcp 1251");
    std::vector<std::string> koloda;
    int player_points;
    std::string choice;
    int revenge{ 1 };
    while (revenge == 1) {
        koloda = start_koloda();
        shuffle(koloda);
        player_points = 0;
        choice = "";
        std::cout << "Вы начали игру" << "\n";
        while (choice != "0" && player_points < 21) {
            std::cout << "Ваши очки " << player_points << "\n";
            std::cout << "1 - тянуть" << "\n";
            std::cout << "0 - хватит" << "\n";
            std::cin >> choice;
            if (choice == "1") {
                std::cout << "Вы достали карту " << koloda.at(koloda.size() - 1) << "\n";
                char num = koloda.at(koloda.size() - 1)[0];
                koloda.resize(koloda.size() - 1);
                switch (num) {
                case '2': player_points += 2; break;
                case '3': player_points += 3; break;
                case '4': player_points += 4; break;
                case '5': player_points += 5; break;
                case '6': player_points += 6; break;
                case '7': player_points += 7; break;
                case '8': player_points += 8; break;
                case '9': player_points += 9; break;
                case 'T': player_points += 10; break;
                case 'J': player_points += 11; break;
                case 'Q': player_points += 12; break;
                case 'K': player_points += 13; break;
                case 'A': player_points += 11; break;
                }
            }
        }
        if (player_points > 21) {
            std::cout << "Ваши очки: " << player_points << ". Вы проиграли.•_•" << "\n";
        }
        else {
            int AI_points{ 0 };
            do {
                sleep();
                std::cout << "Дилер достал карту " << koloda.at(koloda.size() - 1) << "\n";
                char num = koloda.at(koloda.size() - 1)[0];
                koloda.resize(koloda.size() - 1);
                switch (num) {
                case '2': AI_points += 2; break;
                case '3': AI_points += 3; break;
                case '4': AI_points += 4; break;
                case '5': AI_points += 5; break;
                case '6': AI_points += 6; break;
                case '7': AI_points += 7; break;
                case '8': AI_points += 8; break;
                case '9': AI_points += 9; break;
                case 'T': AI_points += 10; break;
                case 'J': AI_points += 11; break;
                case 'Q': AI_points += 12; break;
                case 'K': AI_points += 13; break;
                case 'A': AI_points += 11; break;
                }
                std::cout << "Очки дилера: " << AI_points << "\n";
            } while (AI_points < 17 && AI_points < player_points);
            sleep();
            if (AI_points > 21) {
                std::cout << "Дилер проиграл.•ᴗ•" << "\n";
            }
            else if (AI_points > player_points) {
                std::cout << "Вы проиграли.•_•" << "\n";
            }
            else if (AI_points < player_points) {
                std::cout << "Дилер проиграл.•ᴗ•" << "\n";
            }
            else if (AI_points < player_points) {
                std::cout << "Ничья." << "\n";
            }
        }
        do {
            sleep();
            std::cout << "1 - ещё раз" << "\n";
            std::cout << "0 - закрыть программу" << "\n";
            std::cin >> revenge;
        } while (revenge != 0 && revenge != 1);
    }
    return 0;
}