#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap(std::string Name);
        ~FragTrap();

        void highFivesGuys(void);
        void attack(const std::string& target);
};

#endif