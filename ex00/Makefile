NAME = megaphone

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

SRC = megaphone
OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re