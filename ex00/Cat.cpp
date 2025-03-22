#include "Polymorphism.hpp"

Cat::Cat()
{
    this->setType("Cat");
}

Cat::Cat(std::string &type) : Animal(type)
{
}

Cat::Cat(const Cat& other) : Animal(other)
{
}

Cat::~Cat()
{
}

void    Cat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW" << std::endl;
}