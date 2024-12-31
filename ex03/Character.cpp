#include "Character.hpp"



Character::Character(){
    name = "no_name";
    int i = 0;
    while (i < nb)
        inventory[i++] = NULL;
    std::cout << "Caractere Default Constructo has been Called\n";
}

Character::Character(const std::string &name){
    this->name = name;
    int i = 0;
    while (i < nb)
        inventory[i++] = NULL;
    std::cout << "Caractere String Constructor has been Called\n";
    
}

Character::~Character(){
    std::cout << "Caractere Desstructor has been Called\n";
}

Character::Character(const Character &cp){
    std::cout << "Caractere Copy Constructor has been Called\n";
    int i = 0;
    while (i < nb)
    {
        this->inventory[i++] = NULL;
    }
    i = 0;
    while (i < nb)
    {
        if (cp.inventory[i])
        {
            this->inventory[i] = inventory[i]->clone();
        }
        i++;
    }
}

Character& Character::operator=(const Character &cp){
    std::cout << "Caractere Copy assing operator  has been Called\n";
    int i = 0;
    while (i < nb)
    {
        delete  inventory[i];
        inventory[i] = NULL;
        if (cp.inventory[i])
        {
            this->inventory[i] = inventory[i]->clone();
        }
        i++;
    }
    return *this;

}

std::string const & Character::getName() const{
    return this->name;
}

void Character::equip(AMateria* m){
    int i = 0;

    while (i < nb)
    {
        if (!inventory[i])
        {
            inventory[i++] = m;
            break;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < nb && inventory[idx]){
        // store the address
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < nb && inventory[idx])
        inventory[idx]->use(target);
}