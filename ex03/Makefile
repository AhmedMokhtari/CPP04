NAME = poly

CPPFLAG = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
 

OBJ = main.o AMateria.o Character.o Cure.o Ice.o  MateriaSource.o
# OBJS = main.o AMateria.o Character.o Cure.o Ice.o  MateriaSource.o


INCLUDE = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp


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