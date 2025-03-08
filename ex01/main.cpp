#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap julen("Julen");
	ScavTrap ibon("Ibon");

	julen.attack("Ibon");
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);
	ibon.beRepaired(5);

	std::cout << "Here i'll create a copy of julen with the copy constructor named iker but the subject doesn't let you change the name with a setter so it will appear the name julen" << std::endl;
	ScavTrap iker(julen);
	iker.beRepaired(20);
	iker.guardGate();
	return (0);
}
