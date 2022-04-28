//
// Created by Prime_Games_2 on 28.04.2022.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap:public ScavTrap {
public:
    FragTrap(const std::string &name);
    ~FragTrap();
    void highFivesGuys(void);
};


#endif //EX00_FRAGTRAP_H
