# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 18:24:00 by eamghar           #+#    #+#              #
#    Updated: 2023/09/07 21:44:49 by eamghar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

FRM = rm -rf

NAME = exec

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		

all: $(NAME)

$(NAME): $(SRC) ScavTrap.hpp ClapTrap.hpp
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(FRM) $(NAME)

fclean: clean

re: fclean all
