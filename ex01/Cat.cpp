
#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructor has been called \n";
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cp):Animal(cp){
    operator=(cp);
}

Cat &Cat::operator=(const Cat &cp){
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

Cat::~Cat(){
    std::cout << "Cat Destructor has been called \n";
    delete brain;
}

std::string Cat::getType(void) const{
    return this->type;
}

void Cat::makeSound()const {
    std::cout << "Cat sound \n";
}
