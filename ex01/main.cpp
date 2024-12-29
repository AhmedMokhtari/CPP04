#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* w = new WrongCat();

    // std::cout << "j type is " << j->getType() << " " << std::endl;
    // std::cout << "i type is " << i->getType() << " " << std::endl;
    // std::cout << "wrongCat type is " << w->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // w->makeSound();


    // delete meta;
    // delete i;
    // delete j;
    // delete w;
    

    Cat *a = new Cat;


    a->add_idea("sfdf\n");
    a->add_idea("sfd fgdff\n");
    a->add_idea("sfdf sdgdfg\n");


    Cat b;
    b  = *a;
    delete a;
    std::cout << b.get_idea(1) << std::endl;
        // b.add_idea("sdf\n");

    return 0;
}