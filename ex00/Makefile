NAME = poly

CPPFLAG = -Wall -Wextra -Werror -std=c++98


OBJ = main.o Animal.o Cat.o Dog.o WrongCat.o WrongAnimal.o 


INCLUDE = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp


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