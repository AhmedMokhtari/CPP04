#include "Cure.hpp"


Cure::Cure()
{
    std::cout << "Cure Default Constructor Has been called \n";
    type = "cure";
}

Cure::Cure(const Cure &cp)
{
    std::cout << "Cure  COpy Constructor Has been called \n";
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Has been called \n";
}

Cure& Cure::operator=(const Cure &cp)
{
    std::cout << "Cure assign opeerator overload Has been called \n";
}

// Cure::Cure(std::string const & type)
// {
//     std::cout << "Cure String Constructor Has been called \n";
//     this->type = type;
// }

std::string const & Cure::getType() const
{
    return this->type;
}


AMateria* Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;  
}