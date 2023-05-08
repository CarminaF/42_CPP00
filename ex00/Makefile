NAME 	= megaphone

CC		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98

SRCS 	= megaphone.cpp\

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $< -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
