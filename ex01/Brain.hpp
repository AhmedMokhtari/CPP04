#pragma once
#include <iostream>

class Brain{
    public :
        std::string idea[100];
        Brain();
        Brain(const Brain &cp);
        Brain &operator =(const Brain &cp);
        virtual ~Brain();
};