NAME = Animal
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXCC = c++
FILE = main.cpp \
		Bureaucrat.cpp

OBJECT = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CXXCC) $(CXXFLAGS) -o $(NAME) $(OBJECT)

$(OBJECT) : $(FILE)
	$(CXXCC) $(CXXFLAGS) -c $(FILE)

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(NAME) $(OBJECT)

re : fclean all

.PHONY : all clean fclean
