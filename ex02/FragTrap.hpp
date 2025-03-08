#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);	
		FragTrap(FragTrap& copy);	
		FragTrap& operator=(FragTrap& copy);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuy(void);
};

#endif
