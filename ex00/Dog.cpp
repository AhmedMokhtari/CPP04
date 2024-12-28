
#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor has been called \n";
    type = "Dog";
}

Dog::Dog(const Dog &cp) : Animal(cp){
   
}

Dog &Dog::operator=(Dog &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destructor has been called \n";
}

std::string Dog::getType(void) const{
    return this->type;
}

void Dog::makeSound()const {
    std::cout << "Dog sound \n";
}
