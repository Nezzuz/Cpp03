NAME = FragTrap

SRC =   main.cpp \
        ClapTrap.cpp \
        ScavTrap.cpp \
        FragTrap.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all fclean clean re
