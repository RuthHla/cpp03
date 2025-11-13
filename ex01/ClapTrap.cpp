#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name): _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Constructor of " << this->_Name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor of " << this->_Name << " called" << std::endl;
    (*this) = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_Name = other._Name;
    this->_HitPoints = other._HitPoints;
    this->_EnergyPoints = other._EnergyPoints;
    this->_AttackDamage = other._AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of " << this->_Name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) // initialiser attributs attackDamage plutot ?
{
    if(this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        this->_EnergyPoints--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ",causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else 
        std::cout << "ClapTrap " << this->_Name << " doesn't have enough energy or already dead" << std::endl;
    return;
}

// je naccpete aucun nombre negatif ou superieur a un int Max, ducoup problematique?
void ClapTrap::takeDamage(unsigned int amount)
{
    if((int)amount <= 0 || amount >= INT_MAX)
        return;
    if(this->_HitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_Name << " cannot take damage (already dead) " << std::endl;
        return;
    }
    if ((int)amount >= _HitPoints)
        _HitPoints = 0;
    else
        _HitPoints -= amount;
    std::cout << "ClapTrap " << this->_Name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if((int)amount <= 0 || amount >= INT_MAX)
        return;
    if(this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        this->_HitPoints += amount;
        this->_EnergyPoints--;
        std::cout << "ClapTrap " << this->_Name << " repaired itself for " << amount << " hit points" << std::endl;
    }
    else 
        std::cout << "ClapTrap " << this->_Name << " doesn't have enough energy to be repaired " << std::endl;
    return;
}
