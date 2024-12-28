
#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Constructor has been called \n";
    type = "Animal";
}

Animal::Animal(const Animal &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
}

Animal &Animal::operator=(Animal &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Destructor has been called \n";
}

std::string Animal::getType(void) const{
    return this->type;
}

void Animal::makeSound()const {
    std::cout << "Animal sound \n";
}
