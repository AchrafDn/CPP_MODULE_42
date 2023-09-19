#include "HumanB.hpp"


HumanB::HumanB()
{
    name = "";
    weapon = NULL;
}

HumanB::HumanB(std::string _name)
{
    name = _name;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attack without arm"<< std::endl;
}
