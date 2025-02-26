#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);	
		ScavTrap(ScavTrap& copy);	
		ScavTrap& operator=(ScavTrap& copy);
		virtual ~ScavTrap();
		void	guardGate(void);
};

#endif
