#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "------------FragTrap default constructor created------------" << std::endl;
	std::cout << "Redefining atributtes..." << std::endl;
	std::cout << "New Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "------------FragTrap copy constructor created------------" << std::endl;
	std::cout << "Redefining atributtes..." << std::endl;
	std::cout << "New Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;	
		_hit_points = copy._hit_points;	
		_energy_points = copy._energy_points;	
		_attack_damage = copy._attack_damage;	
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "-----------FragTrap destructor called-----------" << std::endl;
}

void            FragTrap::attack(const std::string& target)
{
	if (!this->_hit_points)
	{
		std::cout << this->_name << " has no hit points" << std::endl;
		return;
	}
	if (!this->_energy_points)
	{
		std::cout << this->_name << " has no energy points" << std::endl;
		return;
	}
	this->_energy_points -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;	
	std::cout << this->_name << " has " << this->_energy_points << " energy points left" << std::endl;
}

void	FragTrap::highFivesGuy(void)
{
	std::cout << "a positive high-fives request on the standard output" << std::endl;
}
