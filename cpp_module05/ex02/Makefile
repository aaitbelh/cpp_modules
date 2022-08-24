# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: casper <casper@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 14:31:23 by aaitbelh          #+#    #+#              #
#    Updated: 2022/08/24 10:20:56 by casper           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp

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