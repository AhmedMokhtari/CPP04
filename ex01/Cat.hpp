#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private :
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &cp);
        Cat &operator =(const Cat &cp);
        virtual ~Cat();
        std::string getType(void) const;
        void makeSound(void) const;
        void add_idea(const std::string &idea);
        std::string get_idea(int index) const;
};