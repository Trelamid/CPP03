//
// Created by Prime_Games_2 on 28.04.2022.
//

#ifndef EX00_DIAMONDTRAP_H
#define EX00_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap :public virtual ScavTrap, public virtual FragTrap{
private:
    std::string name;
public:
    DiamondTrap(const std::string &name);
    ~DiamondTrap();

    void attack(const std::string &target);
};


#endif //EX00_DIAMONDTRAP_H
