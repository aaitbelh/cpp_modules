
NAME = a.out

SRCS = main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
 CFLAGS =  -std=c++98


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