#include "Polymorphism.hpp"
#include "Brain.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = std::string("BLANK!");
    }
    
    std::cout << "Default Brain Constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain Destructor Called" << std::endl;
}

Brain::Brain(std::string (&initideas)[100])
{   for (size_t i = 0; i < 100; i++)
        this->ideas[i] = initideas[i];
    std::cout << "Parametrized Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    
    std::cout << "Copy Brain Constructor Called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }  
    return (*this);
}