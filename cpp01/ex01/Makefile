NAME = Zombie
CPPCC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
# MAIN = main.cpp
CPP = Zombie.cpp \
		ZombieHorde.cpp \
		main.cpp \
		# newZombie.cpp \
		# randomChump.cpp
OBJECT = $(CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CPPCC) $(FLAGS) -o $(NAME) $(OBJECT)

$(OBJECT) : $(CPP)
	$(CPPCC) $(FLAGS) -c $(CPP)

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(NAME) $(OBJECT)

re : fclean all

.PHONY : all clean fclean