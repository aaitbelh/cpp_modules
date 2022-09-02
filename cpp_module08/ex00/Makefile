# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitbelh <aaitbelh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 11:14:37 by casper            #+#    #+#              #
#    Updated: 2022/09/02 08:43:57 by aaitbelh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = find

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