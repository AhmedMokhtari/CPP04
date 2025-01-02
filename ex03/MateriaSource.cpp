#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    std::cout << "MateriaSource Default Constructor Has been called \n";

    for (int i = 0; i < nb; i++)
        inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cp){
    for (int i = 0; i < nb; i++)
        inventory[i] = NULL;
   
    for (int i = 0;i < nb ;i++)
    {
        if (cp.inventory[i])
            this->inventory[i] = cp.inventory[i]->clone();
    }
}

MateriaSource &MateriaSource::operator =(const MateriaSource &cp){
    for (int i = 0; i < nb; i++)
        delete inventory[i];
    for (int i = 0;i < nb ;i++)
    {
        if (cp.inventory[i])
            this->inventory[i] = cp.inventory[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource Destructor Has been called \n";

    for (int i = 0; i < nb; i++)
        delete inventory[i];
}

void MateriaSource::learnMateria(AMateria* a){
    int i  = 0;
    while (i < nb)
    {
        if (!inventory[i])
        {
            inventory[i] = a;
            return ;
        }
        i++;
    }
    delete a;
    std::cout <<  "there is no spcae for learn materia\n";
}

AMateria* MateriaSource::createMateria(std::string const & type){
    
    int i  = 0;
    while (i < nb)
    {
        if (inventory[i] && inventory[i]->getType() == type)
        {
            return inventory[i]->clone();
        }
        i++;
    }
    std::cout <<  "there is no Materai type  for create  materia";
    return NULL;
}
