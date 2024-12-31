// #include "AMateria.hpp"
// #include "ICharacter.hpp"
// #include "Character.hpp"
// #include "Cure.hpp"
// #include "Ice.hpp"
#include <iostream>

class A {
    public :

        virtual void a() = 0;
};

class B  : A{
    public :

};


class C : B{
    public :
        void a() {std::cout << "this is a \n";};
};


int main()
{
    // AMateria *a = new Cure;

    // Character b("Allo");

    // b.equip(a);

    // b.use(0, b);
    // delete a;
    C c;
    c.a();
    return 0;
}