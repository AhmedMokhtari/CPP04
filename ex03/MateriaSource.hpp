#pragma once
#include "AMateria.hpp"

class MateriaSource
{
    private :
        static const int nb = 4;
        AMateria *inventory[nb];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &cp);
        MateriaSource &operator =(const MateriaSource &cp);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};