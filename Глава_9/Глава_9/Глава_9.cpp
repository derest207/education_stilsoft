#include <iostream>
#include <string>
struct Monster {
    std::string nation = "-";
    std::string name = "-";
    int health{ -1 };
};
void printMonster(Monster monster) {
    std::cout << "This "<< monster.nation <<" is named " << monster.name << " and has " << monster.health << " health.\n";
}
int main()
{
    Monster monster1, monster2, monster3;
    monster1.nation = "Ogre";
    monster1.name = "Torg";
    monster1.health = 145;
    monster2.nation = "Slime";
    monster2.name = "Blurp";
    monster2.health = 23;
    printMonster(monster1);
    printMonster(monster2);
    printMonster(monster3);
    return 0;
}