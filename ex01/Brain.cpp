#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor has been called \n";
    nb_ideas = 0;
}

Brain::Brain(const Brain &cp){
    std::cout << "Copy constructor has been called  from Brain\n";
    operator=(cp);
}

Brain &Brain::operator=(const Brain &cp){
    std::cout << "Copy assign operator has been called from Brain \n";
    if (this != &cp)
    {
        for (int i = 0; i < 100 ; i++)
            this->idea[i] = cp.idea[i];
        this->nb_ideas = cp.nb_ideas;
    }
    return *this;
}
void Brain::add_idea(const std::string &idea)
{
    if (nb_ideas < 100)
        this->idea[nb_ideas++] = idea;
    std::cout << "Nb idea is " << nb_ideas << std::endl;
}


std::string Brain::get_idea(int index) const{
    if (index >= 1 && index <= nb_ideas)
        return this->idea[index - 1];
    return "";
}


Brain::~Brain(){
    std::cout << "Brain Destructor has been called \n";
}