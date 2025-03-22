#pragma once

#include "Polymorphism.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(/* args */);
    WrongCat(std::string &type);
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();
    void    makeSound() const;
};
