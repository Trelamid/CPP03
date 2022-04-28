//
// Created by Prime_Games_2 on 26.04.2022.
//

#include "ClapTrap.h"

#ifndef EX00_SCAVTRAP_H
#define EX00_SCAVTRAP_H


class ScavTrap: public virtual ClapTrap {
private:
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();
    void guardGate();
};


#endif //EX00_SCAVTRAP_H
