
#include "Polymorphism.hpp"

Animal::Animal() : type("Undifined")
{
    std::cout << "Animal class default constructor called" << std::endl;
}

Animal::Animal(std::string &type) : type(type)
{
    std::cout << "Animal class parametriezed constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Animal class copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal class destructor called" << std::endl;
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