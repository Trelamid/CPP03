#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"

int main() {
    ClapTrap legion("Legion");
    ClapTrap tali("Tali");

    legion.beRepaired(1);
    tali.takeDamage(1);
    legion.attack("Tali");
    tali.attack("Legion");

    ScavTrap STlegion("Legion");
    ScavTrap STtali("Tali");
    STlegion.guardGate();

    return 0;
}
