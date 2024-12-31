#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string name;
        static const int nb = 4;
        AMateria *inventory[nb];
    public :
        Character();
        Character(const std::string &name);
        ~Character();
        Character(const Character &cp);
        Character& operator=(const Character &cp);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};