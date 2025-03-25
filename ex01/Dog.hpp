#pragma once

#include "Polymorphism.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *dogBrain;
public:
    Dog(/* args */);
    Dog(std::string &type);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void    makeSound() const;
};
