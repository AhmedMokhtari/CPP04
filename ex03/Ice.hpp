#pragma once 
#include "AMateria.hpp"

class Ice : public AMateria{
    public :
        Ice();
        Ice(const Ice &cp);
        ~Ice();
        Ice& operator=(const Ice &cp);
        // Ice(std::string const & type);
        std::string const & getType() const;//Returns the materia type
        AMateria* clone() const;
        void use(ICharacter& target);
};