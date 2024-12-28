
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Constructor has been called \n";
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor has been called \n";
}

std::string WrongAnimal::getType(void) const{
    return this->type;
}

void WrongAnimal::makeSound()const {
    std::cout << "WrongAnimal sound \n";
}
