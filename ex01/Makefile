NAME	=	phone_book
SRC		=	main.cpp
CXX		=	c++ -std=c++98
CXXFLAGS=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean