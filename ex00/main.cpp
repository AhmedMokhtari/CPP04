#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();

    std::cout << "j type is " << j->getType() << " " << std::endl;
    std::cout << "i type is " << i->getType() << " " << std::endl;
    std::cout << "wrongCat type is " << w->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    w->makeSound();


    delete meta;
    delete i;
    delete j;
    delete w;
    return 0;
}