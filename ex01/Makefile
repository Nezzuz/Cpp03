NAME = ScavTrap
ScavTrap= ScavTrap

SRC = 	main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ScavTrap)

$(NAME): all 

$(ScavTrap):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ScavTrap)
        
clean:
	rm -rf $(ScavTrap)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
