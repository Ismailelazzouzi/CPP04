#include "Polymorphism.hpp"

Dog::Dog()
{
    std::cout << "Dog class default constructor called" << std::endl;
    this->setType("Dog");
}

Dog::Dog(std::string &type) : Animal(type)
{
    std::cout << "Dog class parametrized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog class copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog class destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "WHOF WHOF WHOF" << std::endl;
}