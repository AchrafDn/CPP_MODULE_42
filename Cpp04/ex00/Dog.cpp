#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    type = obj.type;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Haw" << std::endl;
}