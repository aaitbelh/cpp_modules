# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 15:53:59 by aaitbelh          #+#    #+#              #
#    Updated: 2022/08/31 20:33:26 by aaitbelh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Werror -Wextra


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