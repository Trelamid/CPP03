//
// Created by Prime_Games_2 on 26.04.2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap( const std::string &name) : ClapTrap(name) {
this->HitPoints = 100;
this->EnergyPoints = 50;
this->AttackDamage = 20;
std::cout << name + "Scav constr" <<std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << name + "Scav deconstr" <<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name + " in keeper mode" << std::endl;
}