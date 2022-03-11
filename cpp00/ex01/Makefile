NAME = PhoneBook
CPPCC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
MAIN = main.cpp
CPP = Phonebook.cpp \
		Contact.cpp
OBJECT = $(CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CPPCC) $(FLAGS) -o $(NAME) $(MAIN) $(OBJECT)

$(OBJECT) : $(CPP)
	$(CPPCC) $(FLAGS) -c $(CPP)

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(NAME) $(OBJECT)

re : fclean all

.PHONY : all clean fclean