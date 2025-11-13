#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
    protected :
        std::string _Name;
        uint _HitPoints;
        uint _EnergyPoints;
        uint _AttackDamage;

    public :
        ClapTrap(void);
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &other); // constructeur de copie
        ClapTrap &operator=(const ClapTrap &other); // copie assignment constructeur 
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif