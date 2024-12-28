#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat &cp);
        WrongCat &operator =(WrongCat &cp);
        virtual ~WrongCat();
        std::string getType(void) const;
        void makeSound(void) const;
};