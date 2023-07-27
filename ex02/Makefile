# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 09:10:49 by araqioui          #+#    #+#              #
#    Updated: 2023/07/27 09:27:32 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
