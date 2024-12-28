#pragma once

#include "Animal.hpp"

class Dog : public Animal{
    public:
    Dog();
    Dog(const Dog &cp);
    Dog &operator =(const Dog &cp);
    virtual ~Dog();
    std::string getType(void) const;
    void makeSound(void) const;
};