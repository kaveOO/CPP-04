name		=	InterfaceAndRecap

CPP			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

SRC			=	main.cpp			\
				AMateria.cpp		\
				Cure.cpp			\
				Ice.cpp				\
				Character.cpp		\
				MateriaSource.cpp	\

OBJ 		= $(SRC:.cpp=.o)

$(name): $(OBJ)
	$(CPP) $(CFLAGS) -o $(name) $(OBJ)

all: $(name)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(name)

re: fclean all

.PHONY:		all clean fclean re
