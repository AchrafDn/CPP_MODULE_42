#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat copy Constructor called" << std::endl;
    type = obj.type;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong meow" << std::endl;
}