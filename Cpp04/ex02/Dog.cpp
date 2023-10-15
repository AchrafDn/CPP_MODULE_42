#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain(*obj.brain);
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Haw" << std::endl;
}