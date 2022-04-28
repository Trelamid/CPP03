//
// Created by Prime_Games_2 on 28.04.2022.
//

#include "FragTrap.h"

FragTrap::FragTrap(const std::string &name):ScavTrap(name), ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << name + "Frag constr" <<std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << name + "Frag deconstr" <<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "give five "+name<< std::endl;
}