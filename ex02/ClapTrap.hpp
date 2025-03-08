#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	protected:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		ClapTrap &operator=(ClapTrap &copy);
		virtual ~ClapTrap();
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
};

#endif
