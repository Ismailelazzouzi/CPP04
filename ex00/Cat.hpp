#pragma once

#include "Polymorphism.hpp"

class Cat : public Animal
{
public:
    Cat(/* args */);
    Cat(std::string &type);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    void    makeSound() const;
};
