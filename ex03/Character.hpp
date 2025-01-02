#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string name;
        static const int nb = 4;
        AMateria *inventory[nb];
        struct collect
        {
            AMateria *p;
            collect *next  = NULL;
            
        };
        collect *head;
        bool is_there(collect *head, AMateria *p);
        bool is_there_i(AMateria *p);
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