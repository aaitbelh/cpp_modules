
NAME = Harl

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all