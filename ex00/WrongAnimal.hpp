#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cp);
        WrongAnimal &operator =(WrongAnimal &cp);
        virtual ~WrongAnimal();
        std::string getType(void) const;
        void makeSound(void) const;
};