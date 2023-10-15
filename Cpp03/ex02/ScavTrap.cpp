#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Constructor called (Derived class)" << std::endl;
    this->name = "";
    hit_p = 10;
    energy_p = 10;
    attack_damage = 0;  
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Parametrized Constructor called (Derived class)" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called (Derived Class)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj)
{
	std::cout << "Copy Constructor called (Derived Class)" << std::endl;
	name = obj.name;
	hit_p = obj.hit_p;
	energy_p = obj.energy_p;
	attack_damage = obj.attack_damage;  
}

void	ScavTrap::attack(const std::string& target)
{
	if (energy_p <= 0)
	{
		std::cout << "ScavTrap " << name << "has no energy points (Derived class)" << std::endl;
		return ;
	}
	std::cout<<"ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " of damage! (Derived class)" << std::endl;
	energy_p--;
	hit_p -= attack_damage;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj)
	{
			this->name = obj.name;
			this->hit_p = obj.hit_p;
			this->energy_p = obj.energy_p;
			this->attack_damage = obj.attack_damage; 
	}
	return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " in Gate Keeper mode" << std::endl;
}