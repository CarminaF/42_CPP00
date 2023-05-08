NAME 			=	carmina_phonebook

CC				=	c++
FLAGS			=	-Wextra -Wall -Werror -std=c++98

SRCS_DIR 		=	./sources
OBJS_DIR		=	./objects
INCLUDES_DIR 	= 	./includes

SRCS 			=	$(SRCS_DIR)/Contact.cpp\
					$(SRCS_DIR)/PhoneBook.cpp\
					$(SRCS_DIR)/main.cpp\

OBJS			=	$(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

all: $(OBJS_DIR) $(NAME) 

$(OBJS_DIR): 
	mkdir -p $(OBJS_DIR)


$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) -c $< -o $@ 

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) $(OBJS)  -o $@ 


clean:
	rm -rf $(OBJS_DIR)


fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
