# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 09:05:55 by araqioui          #+#    #+#              #
#    Updated: 2023/07/28 08:50:19 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re