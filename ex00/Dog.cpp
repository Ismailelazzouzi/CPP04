#include "Polymorphism.hpp"

Dog::Dog()
{
    this->setType("Dog");
}

Dog::Dog(std::string &type) : Animal(type)
{
}

Dog::Dog(const Dog& other) : Animal(other)
{
}

Dog::~Dog()
{
}

void    Dog::makeSound() const
{
    std::cout << "WHOF WHOF WHOF" << std::endl;
}