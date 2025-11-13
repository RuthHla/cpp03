#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap Constructor of " << this->_Name << " Called" << std::endl;
}
    
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor of " << this->_Name << " Called" << std::endl;
}
        
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << "request a positive highfive !?" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        this->_EnergyPoints--;
        std::cout << "FragTrap " << this->_Name << " uses his weakest attacks to " << target << ",causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else 
        std::cout << "FragTrap " << this->_Name << "'s hiding or already scared to death" << std::endl;
    return;
}