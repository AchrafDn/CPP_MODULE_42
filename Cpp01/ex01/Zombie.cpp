#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": i am here" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}


std::string	Zombie::get_name(void)
{
	return(name);
}

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cout << "Enter a valid number (int)" << std::endl;
		return nullptr;
	}
	Zombie*	ptrZombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		ptrZombie[i].set_name(name);
	return ptrZombie;
}