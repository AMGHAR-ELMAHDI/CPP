# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 18:24:00 by eamghar           #+#    #+#              #
#    Updated: 2023/10/27 22:08:14 by eamghar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

FRM = rm -rf

NAME = PmergeMe

HEADER = PmergeMe.hpp\

SRC =	PmergeDeque.cpp \
		PmergeMe.cpp \
		main.cpp \
		
all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(FRM) $(NAME)

fclean: clean

re: fclean all
