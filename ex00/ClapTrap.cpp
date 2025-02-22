#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	if (this != &copy)
		this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap& operator=(ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;	
		_hit_points = copy._hit_points;	
		_energy_points = copy._energy_points;	
		_attack_damage = copy._attack_damage;	
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << 0 << " points of damage!" << std::endl;	
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
	std::cout << this->name << " healed " << amount << " hit points" << std::endl;
}
