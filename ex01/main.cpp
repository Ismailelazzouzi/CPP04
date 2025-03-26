#include "Polymorphism.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void    leakcheck(void)
{
    system("leaks Polymorphism");   
}

int main(void)
{
    atexit(leakcheck);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output dog sound!
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return (0);
}