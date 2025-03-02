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

	ScavTrap iker(julen);
	iker.beRepaired(20);
	iker.guardGate();
	return (0);
}
