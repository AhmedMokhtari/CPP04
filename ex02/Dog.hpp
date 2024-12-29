#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private :
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &cp);
        Dog &operator =(const Dog &cp);
        virtual ~Dog();
        std::string getType(void) const;
        void makeSound(void) const;
        void add_idea(const std::string &idea);
        std::string get_idea(int index) const;
};