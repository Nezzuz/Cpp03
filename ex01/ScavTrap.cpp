#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "||||||||||||ScavTrap default constructor created||||||||||||" << std::endl;
}

Scavtrap::ScavTrap(ScavTrap& copy)
{
	/* *this = copy; */
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Now " << this->_name << " is in in gate keeper mode" << std::endl;
}
