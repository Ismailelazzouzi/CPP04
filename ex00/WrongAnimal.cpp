#include "Polymorphism.hpp"

WrongAnimal::WrongAnimal() : type("Undifined")
{
}

WrongAnimal::WrongAnimal(std::string &type) : type(type)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal type Undifined" << std::endl;
}