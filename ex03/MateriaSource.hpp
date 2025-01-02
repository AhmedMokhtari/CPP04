#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
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