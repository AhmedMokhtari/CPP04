#pragma once
#include <iostream>
#include <string>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal &cp);
        Animal &operator =(Animal &cp);
        virtual ~Animal();
        std::string getType(void) const;
        virtual void makeSound(void) const;
};