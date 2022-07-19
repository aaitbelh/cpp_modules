SRC = megaphone.cpp
OBJ = megaphone.o
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -c  -std=c++98

all : $(NAME) 
$(NAME) : $(OBJ)
	c++ $(FLAGS) $(SRC) -o megaphone
clean :
	rm -f $(OBJ)
	rm -f megaphone
re : clean all