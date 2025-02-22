NAME = ClapTrap
ClapTrap= ClapTrap

SRC = 	main.cpp \
	ClapTrap.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ClapTrap)

$(NAME): all 

$(ClapTrap):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ClapTrap)
        
clean:
	rm -rf $(ClapTrap)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
