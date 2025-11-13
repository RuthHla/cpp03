#include "ClapTrap.hpp"

int main ()
{
		ClapTrap a;
		ClapTrap b("Bertrand");

		a.attack("some other robot");
		a.takeDamage(9);
		a.takeDamage(2);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Bertrand-clone");
		b.beRepaired(3);
    return 0;
}