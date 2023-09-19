#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA{
    private:
		Weapon&	weapon;// store a reference to the Weapon object
		std::string	name;
    public:
		HumanA(std::string name, Weapon& arm);
		void	attack();
};

#endif