#pragma once

#include "Polymorphism.hpp"

class Dog : public Animal
{
public:
    Dog(/* args */);
    Dog(std::string &type);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void    makeSound() const;
};
