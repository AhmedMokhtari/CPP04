
#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor has been called \n";
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &cp):Animal(cp){
    this->type = cp.type;
    brain = new Brain(*(cp.brain));
    // *brain = *(cp.brain);
    // operator=(cp);
}

Dog &Dog::operator=(const Dog &cp){
    if (this != &cp)
    {
        this->type = cp.type;
        delete brain;
        brain = new Brain();
        *brain = *(cp.brain);
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


void Dog::add_idea(const std::string &idea){
    brain->add_idea(idea);
}

std::string  Dog::get_idea(int index) const{
    return (brain->get_idea(index));
}

