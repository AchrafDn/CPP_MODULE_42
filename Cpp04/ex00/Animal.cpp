#include "Animal.hpp"

Animal::Animal(): type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy Constructor called" << std::endl;
    type = obj.type;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

void    Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}