#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor has been called \n";

}

Brain::Brain(const Brain &cp){
    operator=(cp);
}

Brain &Brain::operator=(const Brain &cp){
    if (this != &cp)
    {
        for (int i = 0; i < 100 ; i++)
            this->idea[i] = cp.idea[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor has been called \n";
}