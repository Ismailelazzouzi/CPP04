#include "Polymorphism.hpp"

WrongDog::WrongDog()
{
    this->setType("WrongDog");
}

WrongDog::WrongDog(std::string &type) : WrongAnimal(type)
{
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other)
{
}

WrongDog::~WrongDog()
{
}

void    WrongDog::makeSound() const
{
    std::cout << "WHOF WHOF WHOF" << std::endl;
}