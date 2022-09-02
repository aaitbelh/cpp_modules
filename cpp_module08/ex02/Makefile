# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 16:26:31 by aaitbelh          #+#    #+#              #
#    Updated: 2022/09/01 19:43:39 by aaitbelh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98


all : $(NAME)
$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)
re : fclean all