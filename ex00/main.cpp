#include "Polymorphism.hpp"
#include "Animal.hpp"

int main(void)
{
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output dog sound!
    meta->makeSound();
    // testing without the virtual attribute
    // const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* j = new WrongDog();
    // const WrongAnimal* i = new WrongCat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the WrongCat sound!
    // j->makeSound(); //will output WrongDog sound!
    // meta->makeSound();
    return (0);

}