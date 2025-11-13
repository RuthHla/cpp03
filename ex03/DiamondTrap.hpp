#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string _Name; // doit contenir la meme valeur que _Name de ClapTrap b
        
    public :
        DiamondTrap(std::string Name);
        ~DiamondTrap();

        using ScavTrap::attack;

        void whoAmI();
};

#endif