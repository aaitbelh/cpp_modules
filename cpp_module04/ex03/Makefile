NAME = interface

SRCS = main.cpp AMateria.cpp Character.cpp Ice.cpp  MateriaSource.cpp Cure.cpp Air.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
 CFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address


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