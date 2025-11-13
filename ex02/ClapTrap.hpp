#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <climits>

class ClapTrap // forme canonique
{
    protected :
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;

    public : //garder les contructeurs vide ? verifier sujet
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