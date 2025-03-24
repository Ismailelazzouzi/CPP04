#include "Polymorphism.hpp"

Cat::Cat()
{
    std::cout << "Cat class default constructor called" << std::endl;
    this->setType("Cat");
}

Cat::Cat(std::string &type) : Animal(type)
{
    std::cout << "Cat class parametriezed constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat class copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat class destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW" << std::endl;
}