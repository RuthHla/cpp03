#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
		ClapTrap a("ClapBot");
		ScavTrap s("NewBot");

		a.attack("some other robot");
		a.takeDamage(9);
		a.beRepaired(5);
		s.attack("some other other robot");
		s.takeDamage(49);
		s.beRepaired(3);
		s.takeDamage(100);
		s.takeDamage(100);
		s.guardGate();
    return 0;
}