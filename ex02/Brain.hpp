#pragma once
#include <iostream>

class Brain{
    private :
        int nb_ideas;
    public :
        std::string idea[100];
        Brain();
        Brain(const Brain &cp);
        Brain &operator =(const Brain &cp);
        void add_idea(const std::string &idea);
        std::string get_idea(int index) const;
        virtual ~Brain();
};