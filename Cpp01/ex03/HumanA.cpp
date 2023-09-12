#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA()
{
    name = "";
    weapon = Weapon();
}

HumanA::HumanA(std::string name, Weapon arm)
{
    this->name = name;
    weapon = arm;
}