
NAME = Account

SRCS = tests.cpp Account.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = g++
CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm  $(OBJS)
fclean : clean
	rm $(NAME)
re : fclean all