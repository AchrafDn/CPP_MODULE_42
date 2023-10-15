#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for( int i= 0; i < 100; i++)
        ideas[i] = "";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain copy Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    return *this;
}