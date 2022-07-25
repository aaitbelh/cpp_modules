NAME = megaphone

SRC = megaphone.cpp \

OBJ = $(SRC:.cpp=.o)
CFLAGS = 
CC = c++

all : $(NAME) 
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<
clean :
	rm -f $(OBJ)
	rm -f megaphone
fclean : clean
	rm -f $(NAME)
re : clean all