#include "HumanA.hpp"
#include <iostream>

int main()
{
	// Weapon	arm;
	// HumanA	object = HumanA("name", arm);
	// std::string	name = "Achraf";

	// arm.setType("Nadi");
	// object.attack();
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	return 0;
}