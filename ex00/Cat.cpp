
#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructor has been called \n";
    type = "Cat";
}

Cat::Cat(const Cat &cp):Animal(cp){
    
}

Cat &Cat::operator=(Cat &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destructor has been called \n";
}

std::string Cat::getType(void) const{
    return this->type;
}

void Cat::makeSound()const {
    std::cout << "Cat sound \n";
}
