#pragma once

class Animal
{
private:
    std::string type;
public:
    Animal();
    Animal(std::string &type);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    void    setType(const std::string type);
    std::string getType() const;
    virtual void    makeSound() const = 0;
};
