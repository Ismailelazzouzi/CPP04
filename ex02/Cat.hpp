#pragma once

#include "Polymorphism.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *catBrain;
public:
    Cat(/* args */);
    Cat(std::string &type);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    void    makeSound() const;
};
