#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
// rajouter la forme canonique des classes
class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string Name);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif 