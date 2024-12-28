
#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor has been called \n";
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &cp) : Animal(cp){
   operator=(cp);
}

Dog &Dog::operator=(const Dog &cp){
    if (this != &cp)
    {
        this->type = cp.type;
        delete brain;
        brain = new Brain();
        for (int i = 0; i < 100 ; i++)
        {
            brain->idea[i] = cp.brain->idea[i];
        }
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destructor has been called \n";
    delete brain;
}

std::string Dog::getType(void) const{
    return this->type;
}

void Dog::makeSound()const {
    std::cout << "Dog sound \n";
}
