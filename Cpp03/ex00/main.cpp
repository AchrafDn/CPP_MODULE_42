#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj;

    obj = ClapTrap("Achraf");
    obj.attack("Yass");
    obj.takeDamage(9);
    obj.beRepaired(10);
}