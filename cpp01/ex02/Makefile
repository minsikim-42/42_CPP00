NAME = Zombie
CPPCC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
MAIN = main.cpp
OBJECT = $(MAIN:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CPPCC) $(FLAGS) -o $(NAME) $(OBJECT)

$(OBJECT) : $(MAIN)
	$(CPPCC) $(FLAGS) -c $(MAIN)

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(NAME) $(OBJECT)

re : fclean all

.PHONY : all clean fclean