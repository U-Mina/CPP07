NAME	= iter
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++17
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean