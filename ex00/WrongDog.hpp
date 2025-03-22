#pragma once

#include "Polymorphism.hpp"

class WrongDog : public WrongAnimal
{
public:
    WrongDog(/* args */);
    WrongDog(std::string &type);
    WrongDog(const WrongDog& other);
    WrongDog& operator=(const WrongDog& other);
    ~WrongDog();
    void    makeSound() const;
};
