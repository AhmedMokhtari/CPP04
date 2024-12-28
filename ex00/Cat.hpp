#pragma once

#include "Animal.hpp"

class Cat : public Animal{
    public:
    Cat();
    Cat(const Cat &cp);
    Cat &operator =(const Cat &cp);
    virtual ~Cat();
    std::string getType(void) const;
    void makeSound(void) const;
};