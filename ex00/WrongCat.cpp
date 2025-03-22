#include "Polymorphism.hpp"

WrongCat::WrongCat()
{
    this->setType("WrongCat");
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type)
{
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
}

WrongCat::~WrongCat()
{
}

void    WrongCat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW" << std::endl;
}