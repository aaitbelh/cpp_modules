
NAME = Zombie
SRCS = Zombie.cpp randomChump.cpp newZombie.cpp zombieHorde.cpp main.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm  $(OBJS)
fclean : clean
	rm $(NAME)
re : fclean all