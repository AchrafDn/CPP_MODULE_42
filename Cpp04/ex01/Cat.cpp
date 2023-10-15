#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain(*obj.brain);
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}