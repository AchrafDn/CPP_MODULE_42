#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
    this->name = "";
    hit_p = 10;
    energy_p = 10;
    attack_damage = 0;  
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parametrized Constructor called" << std::endl;
    this->name = name;
    hit_p = 10;
    energy_p = 10;
    attack_damage = 0; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	name = obj.name;
	hit_p = obj.hit_p;
	energy_p = obj.energy_p;
	attack_damage = obj.attack_damage;  
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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

void	ClapTrap::attack(const std::string& target)
{
	if (energy_p <= 0 || hit_p <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
		return ;
	}
	std::cout<<"ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " of damage!" << std::endl;
	energy_p--;
	hit_p -= attack_damage;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_p <= 0 || energy_p <= 0)
	{
		std::cout << "ClapTrap " << name << "  has no points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " get " << amount << " of damage!"<< std::endl;
	hit_p -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_p <= 0 || hit_p <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " gets " << amount << " points back" << std::endl;
	energy_p--;
	hit_p += amount;
}