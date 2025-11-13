#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name): ClapTrap(Name + "_clap_name"), FragTrap(Name),  ScavTrap(Name), _Name(Name)
{
    _HitPoints = FragTrap::_HitPoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;

    std::cout << "DiamondTrap Constructor of " << _Name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor of " << _Name << " called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
