#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap first("Achraf");
    first.attack("Dadoun");
    first.takeDamage(10);
    first.beRepaired(10);
    first.guardGate();

    FragTrap second("Youssef");
    second.attack("Nafiss");
    second.takeDamage(10);
    second.beRepaired(10);
    second.highFivesGuys();
    return 0;
}