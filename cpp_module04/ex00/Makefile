
NAME = Animal

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
 CFLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all