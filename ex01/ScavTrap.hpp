#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(std::string name);	
		ScavTrap(ScavTrap& copy);	
		ScavTrap& operator=(ScavTrap& copy);
		~ScavTrap();
	public:
		void	guardGate(void);
}

#endif
