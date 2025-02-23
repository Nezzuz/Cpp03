#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap julen("Julen");
	ClapTrap ibon("Ibon");

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

	ClapTrap iker(julen);
	iker.beRepaired(20);
	return (0);
}
