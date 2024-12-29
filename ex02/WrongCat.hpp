#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat &cp);
        WrongCat &operator =(const WrongCat &cp);
        virtual ~WrongCat();
        std::string getType(void) const;
        void makeSound(void) const;
};