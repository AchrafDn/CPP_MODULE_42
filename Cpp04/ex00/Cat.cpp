#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    type = obj.type;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = obj.type;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}