#pragma once
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;
class AMateria {
    protected:
        std::string type;
    public:
        AMateria();
        ~AMateria();
        AMateria(const AMateria &cp);
        AMateria & operator=(const AMateria &cp);
        AMateria(std::string const & type);
        std::string const & getType() const;//Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
