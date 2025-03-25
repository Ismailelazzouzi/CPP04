#include "Polymorphism.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog class default constructor called" << std::endl;
    this->setType("Dog");
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = std::string("WHOF WHOF !!!");
    }
    
    dogBrain = new Brain(ideas);
}
 
Dog::Dog(std::string &type) : Animal(type)
{
    std::cout << "Dog class parametrized constructor called" << std::endl;
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = std::string("WHOF WHOF !!!");
    }
    dogBrain = new Brain(ideas);
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog class copy constructor called" << std::endl;
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = other.dogBrain->ideas[i];
    }
    dogBrain = new Brain(ideas);
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete dogBrain;
        dogBrain = new Brain(*other.dogBrain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog class destructor called" << std::endl;
    delete dogBrain;
}

void    Dog::makeSound() const
{
    std::cout << "WHOF WHOF WHOF" << std::endl;
}