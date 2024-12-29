
#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructor has been called \n";
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cp):Animal(cp){
    this->type = cp.type;
    brain = new Brain(*(cp.brain));
    // brain = new Brain();
    // *brain = *(cp.brain);
    // operator=(cp);
}

Cat &Cat::operator=(const Cat &cp){
    if (this != &cp)
    {
        this->type = cp.type;
        delete brain;
        brain = new Brain();
        *brain = *(cp.brain);
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


void Cat::add_idea(const std::string &idea){
    brain->add_idea(idea);
}

std::string  Cat::get_idea(int index) const{
    return (brain->get_idea(index));
}

