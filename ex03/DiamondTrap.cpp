//
// Created by Prime_Games_2 on 28.04.2022.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(const std::string &name): ScavTrap(name), FragTrap(name), ClapTrap(name)
{
    this->name = ClapTrap::name;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}