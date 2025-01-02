#pragma once 
#include "AMateria.hpp"

class Cure : public AMateria{
    public :
        Cure();
        Cure(const Cure &cp);
        ~Cure();
        Cure& operator=(const Cure &cp);
        // Cure(std::string const & type);
        // std::string const & getType() const;//Returns the materia type
        AMateria* clone() const;
        void use(ICharacter& target);
};