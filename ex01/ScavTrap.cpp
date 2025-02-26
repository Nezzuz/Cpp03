#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "||||||||||||ScavTrap default constructor created||||||||||||" << std::endl;
	std::cout << "Redefining atributtes..." << std::endl;
	std::cout << "New Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "||||||||||||ScavTrap copy constructor created||||||||||||" << std::endl;
	std::cout << "Redefining atributtes..." << std::endl;
	std::cout << "New Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "|||||||||||ScavTrap destructor called|||||||||||" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Now " << this->_name << " is in in gate keeper mode" << std::endl;
}
