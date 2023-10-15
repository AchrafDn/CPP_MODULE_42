#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called (Derived class)" << std::endl;
    this->name = "";
    hit_p = 100;
    energy_p = 100;
    attack_damage = 30;  
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Parametrized Constructor called (Derived class)" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 100;
    attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called (Derived Class)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
	std::cout << "Copy Constructor called (Derived Class)" << std::endl;
	name = obj.name;
	hit_p = obj.hit_p;
	energy_p = obj.energy_p;
	attack_damage = obj.attack_damage;  
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
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

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << "  positive high fives request" << std::endl;
}