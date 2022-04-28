#include <iostream>
#include "ClapTrap.h"

int main() {
    ClapTrap legion("Legion");
    ClapTrap tali("Tali");

    legion.beRepaired(1);
    tali.takeDamage(1);
    legion.attack("Tali");
    tali.attack("Legion");

    return 0;
}
