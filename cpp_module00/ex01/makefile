
NAME = Phonbook

SRCS = Phonebook.cpp  Contact.cpp main.cpp\

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o : %.cpp
	$(CC) $(CFLAGS) -c $<
clean :
	rm  $(OBJS)
fclean : clean
	rm $(NAME)
re : fclean all