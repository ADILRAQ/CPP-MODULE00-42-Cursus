NAME = Exe

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
HEADER = Account.hpp
RM = rm -f

SRC = tests \

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