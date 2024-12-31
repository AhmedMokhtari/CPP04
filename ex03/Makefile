NAME = poly

CPPFLAG = -Wall -Wextra -Werror -std=c++98
 

OBJ = main.o AMateria.o Character.o Cure.o Ice.o ICharacter.o


INCLUDE = AMateria.hpp Charactere.hpp Cure.hpp Ice.hpp ICharacter.hpp


all : $(NAME)


$(NAME) : $(OBJ)
		c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	c++ -c $(CPPFLAG) $< -o $@


clean :
	rm -rf $(OBJ)


fclean : clean
	rm -rf $(NAME)


re : fclean all