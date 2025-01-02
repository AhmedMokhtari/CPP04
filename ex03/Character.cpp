#include "Character.hpp"



Character::Character(){
    name = "no_name";
    int i = 0;
    while (i < nb)
        inventory[i++] = NULL;
    head = NULL;
    std::cout << "Caractere Default Constructo has been Called\n";
}

Character::Character(const std::string &name){
    this->name = name;
    int i = 0;
    while (i < nb)
        inventory[i++] = NULL;
    head = NULL;
    std::cout << "Caractere String Constructor has been Called\n";
    
}

Character::~Character(){
    std::cout << "Caractere Desstructor has been Called\n";

    collect *tmp = NULL;
    while (head)
    {
        tmp = head->next;

        // printf("add %p \n", head);
        delete head->p;
        delete head;
        head = tmp;
    }
    for(int i = 0; i < nb; i++)
        delete inventory[i];
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
        if (m && !inventory[i] && !is_there_i(m))
        {
            inventory[i] = m;
            break;
        }
        i++;
    }
}

bool Character::is_there(collect *head, AMateria *p)
{
    while (head)
    {
        if (head->p == p)
            return true;
        head = head->next;
    }
    for (int i = 0; i < nb;i++)
    {
        if (inventory[i] == p)
            return true;
    }
    return false;
}
bool Character::is_there_i(AMateria *p)
{
    for (int i = 0; i < nb;i++)
    {
        if (inventory[i] == p)
            return true;
    }
    return false;
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < nb && inventory[idx]){
        AMateria *p = inventory[idx];
        inventory[idx] = NULL;
        if (!is_there(head, p))
        {
            collect *tmp = new collect;
            tmp->p = p;
            tmp->next = head;
            head = tmp;
        }
        // inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < nb && inventory[idx])
        inventory[idx]->use(target);
}