#pragma once

class WrongAnimal
{
private:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string &type);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);
    ~WrongAnimal();
    void    setType(const std::string type);
    std::string getType() const;
    void    makeSound() const;
};
