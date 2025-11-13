#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//proteger entree + forme canonique

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string _Name;
        
    public :
        DiamondTrap(std::string Name);
        ~DiamondTrap();

        using ScavTrap::attack;

        void whoAmI();
};

#endif