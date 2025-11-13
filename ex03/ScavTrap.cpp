#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    this-> _HitPoints = 100;
    this-> _EnergyPoints = 50;
    this-> _AttackDamage = 20;
    std::cout << "ScavTrap Constructor of " << this->_Name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor of " << this->_Name << " called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        this->_EnergyPoints--;
        std::cout << "ScavTrap " << this->_Name << " attacks enraged and viciously " << target << ",causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else 
        std::cout << "ScavTrap " << this->_Name << "'s too lazy or already asleep" << std::endl;
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
