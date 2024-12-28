
#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat Constructor has been called \n";
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cp):WrongAnimal(cp){
    
}

WrongCat &WrongCat::operator=(WrongCat &cp){
    if (this != &cp)
    {
        this->type = cp.type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor has been called \n";
}

std::string WrongCat::getType(void) const{
    return this->type;
}

void WrongCat::makeSound()const {
    std::cout << "WrongCat sound \n";
}
