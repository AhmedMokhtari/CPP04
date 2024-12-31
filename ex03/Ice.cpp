#include "Ice.hpp"


Ice::Ice()
{
    std::cout << "Ice Default Constructor Has been called \n";
    type = "ice";
}

Ice::Ice(const Ice &cp)
{
    std::cout << "Ice  Copy Constructor Has been called \n";
}

Ice::~Ice()
{
    std::cout << "Ice Destructor Has been called \n";
}

Ice& Ice::operator=(const Ice &cp)
{
    std::cout << "Ice assign opeerator overload Has been called \n";
}

// Ice::Ice(std::string const & type)
// {
//     std::cout << "Ice String Constructor Has been called \n";
//     this->type = type;
// }

std::string const & Ice::getType() const
{
    return this->type;
}


AMateria* Ice::clone() const
{
    return new Ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;  
}