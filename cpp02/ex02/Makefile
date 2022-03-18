NAME = fixed
CPPCC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
CPP = fixed.cpp \
		main.cpp
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