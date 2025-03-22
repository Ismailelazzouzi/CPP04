
#include "Polymorphism.hpp"

Animal::Animal() : type("Undifined")
{
}

Animal::Animal(std::string &type) : type(type)
{
}

Animal::Animal(const Animal& other) : type(other.type)
{
}

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(std::string type)
{
    this->type = type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal type Undifined" << std::endl;
}