#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "***********ClapTrap constructor called***********" << std::endl;
	std::cout << "Initial Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "***********ClapTrap copy constructor called***********" << std::endl;
	std::cout << "Initial Values:" << std::endl << "Name: " << _name << std::endl << "Hit points: " << _hit_points << std::endl << "Energy points: " << _energy_points << std::endl << "Attack damage " << _attack_damage << std::endl << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& copy)
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

ClapTrap::~ClapTrap()
{
	std::cout << "***********ClapTrap destructor called***********" << std::endl;
}

void            ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;	
	std::cout << this->_name << " has " << this->_energy_points << " energy points left" << std::endl;
}

void            ClapTrap::takeDamage(unsigned int amount)
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
	this->_hit_points -= amount;
	std::cout << this->_name << " received " << amount << " points of damage" << std::endl;
}

void            ClapTrap::beRepaired(unsigned int amount)
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
	this->_hit_points += amount;
	this->_energy_points -= 1;
	std::cout << this->_name << " healed " << amount << " hit points" << std::endl;
	std::cout << this->_name << " has "  << this->_hit_points << " hit points left and " << this->_energy_points << " energy points left" << std::endl;
}
