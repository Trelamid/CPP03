//
// Created by Prime_Games_2 on 26.04.2022.
//

#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string const &name)
{
    this->name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << name + " is alive CT" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, const int hitPoints, const int energyPoints, const int attackDamage)
{
    this->name = name;
    HitPoints = hitPoints;
    EnergyPoints = energyPoints;
    AttackDamage = attackDamage;
    std::cout << name + " is alive CT" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name + " become a brick" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(EnergyPoints > 0)
        EnergyPoints--;
    else
    {
        std::cout << name + " do not have energy" << std::endl;
        return;
    }
    std::cout << name + " attack " + target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    std::cout << name + " take damage " << amount << std::endl;
    if(HitPoints <= 0)
        std::cout << name + " do not have HitPoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints > 0)
        EnergyPoints--;
    else
    {
        std::cout << name + " do not have energy" << std::endl;
        return;
    }
    this->HitPoints += amount;
    std::cout << name + " hill of " << amount << std::endl;
}
