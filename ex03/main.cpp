#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main ()
{
	DiamondTrap d("Diamond Bot");

	d.attack("Elephant");
	d.whoAmI();
	d.takeDamage(30);
    d.beRepaired(10);
	
    return 0;
}