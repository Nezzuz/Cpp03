#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap julen("Julen");
	FragTrap enemy("Enemy");

	julen.attack("Enemy");

	std::cout << "Here i'll create a copy of julen with the copy constructor named iker but the subject doesn't let you change the name with a setter so it will appear the name julen. Now as an instance of FragTrap instead of ScavTrap" << std::endl;
	ScavTrap scav1("Scav1");
	ScavTrap scav2(scav1);
	scav2.beRepaired(20);
	std::cout << "Here is the new function" << std::endl;
	julen.highFivesGuy();
	return (0);
}
