#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
		ClapTrap a("Clapy Bot");
		ScavTrap s("Scavy Bot");
		FragTrap f("Fragy Bot");

		s.attack("some other other robot");
		s.guardGate();
		f.attack("another bot");
		f.highFivesGuys();
    return 0;
}