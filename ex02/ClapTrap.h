//
// Created by Prime_Games_2 on 26.04.2022.
//

#include <string>
#include <ostream>
#include <iostream>

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H


class ClapTrap {

protected:
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

public:
    ClapTrap(std::string const &name);
    ClapTrap(std::string const &name, const int hitPoints, const int energyPoints, const int attackDamage);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //EX00_CLAPTRAP_H
