NAME = PhoneBook

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
HEADER = PhoneBook.hpp Contact.hpp
RM = rm -f

SRC = main Contact PhoneBook \

OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re