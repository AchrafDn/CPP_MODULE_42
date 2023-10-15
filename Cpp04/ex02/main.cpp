#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete i;
    delete j;
    
    std::cout << "******************\n" << std::endl;

    Animal* animal[] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for(int i = 0; i < 4; i++)
    {
        delete animal[i];
    }
    return 0;
}