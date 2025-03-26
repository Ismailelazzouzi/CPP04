#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class default constructor called" << std::endl;
    this->setType("Cat");
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = std::string("MEAW MEAW !!!");
    }
    
    catBrain = new Brain(ideas);
}

Cat::Cat(std::string &type) : Animal(type)
{
    std::cout << "Cat class parametriezed constructor called" << std::endl;
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = std::string("MEAW MEAW !!!!");
    }
    catBrain = new Brain(ideas);
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat class copy constructor called" << std::endl;
    std::string ideas[100];
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = other.catBrain->ideas[i];
    }
    catBrain = new Brain(ideas);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete catBrain;
        catBrain = new Brain(*other.catBrain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat class destructor called" << std::endl;
    delete catBrain;
}

void    Cat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW" << std::endl;
}