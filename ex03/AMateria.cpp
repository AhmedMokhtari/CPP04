#include "AMateria.hpp"


AMateria::AMateria(){
    std::cout << "AMateria Default Constructo has been Called\n";
}

AMateria::~AMateria(){
    std::cout << "AMateria Destructo has been Called\n";
}

AMateria::AMateria(const AMateria &cp):type(cp.type){
    std::cout << "AMateria Copy COnstructor has been Called\n";
}

AMateria & AMateria::operator=(const AMateria &cp){
    (void)cp;
    return *this;
}

AMateria::AMateria(std::string const & type){
    std::cout << "AMateria String Constructo has been Called\n";
    this->type = type;

}

std::string const & AMateria::getType() const{
    return this->type;
}

void AMateria::use(ICharacter& target){
    std::cout << "* AMateria used at " << target.getName() << " *" << std::endl;  
}