NAME = Zombie
CPPCC = c++
FLAGS = -Wall -Wextra -Werror
MAIN = main.cpp
CPP = Zombie.cpp \
		ZombieHorde.cpp \
		# newZombie.cpp \
		# randomChump.cpp
OBJECT = $(CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT) $(MAIN)
	$(CPPCC) $(FLAGS) -o $(NAME) $(MAIN) $(OBJECT)

$(OBJECT) : $(CPP)
	$(CPPCC) $(FLAGS) -c $(CPP)

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(NAME) $(OBJECT)

re : fclean all

.PHONY : all clean fclean