#include "Zombie.hpp"

int main()
{
    std::string name;
    Zombie* zombie;

    std::cout << "#--------------------------#"<< std::endl;
    std::cout << "Allocating a zombie in stack"<< std::endl;
    std::cout << "Enter the name of zombie: ";
    std::cin >> name;
    zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    std::cout << "#--------------------------#"<< std::endl;
    std::cout << "Allocating a zombie in heap"<< std::endl;
    std::cout << "Enter the name of zombie: ";
    std::cin >> name;
    randomChump(name);
    return 0;
}