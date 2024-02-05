/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:26:23 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:42:12 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " + this->_name + " is destroy and can't attack " + target + "\n";
    else if (this->_energyPoints <= 0)
        std::cout << "ScavTrap " + this->_name + " don't have enought energy for doing that\n";
    else
    {
        std::cout << "ScavTrap " + this->_name + " attacks " + target + " , causing " << this->_attackDamage << " points of damage!\n";
        this->_energyPoints = this->_energyPoints - 1;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " + this->_name + " is already destroy\n";
    else
    {
        std::cout << "ScavTrap " + this->_name + " take " << amount << " points of damage\n";
        this->_hitPoints  = this->_hitPoints - amount;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " + this->_name + " is destroy and can't be heal\n";
    else if (this->_hitPoints >= 10)
        std::cout << "ScavTrap " + this->_name + " is clearly ok and don't need more hit points\n";
    else
    {
        std::cout << "ScavTrap " + this->_name + " Repaired " << amount << "hit points";
        this->_energyPoints  = this->_energyPoints - 1;
    }  
}


void ScavTrap::guardGate(void)
{
    if (this->_gateKeeper == false)
    {
        std::cout << "ScavTrap " + this->_name +  " est entré en mode Gate keeper.\n";
        _gateKeeper = true;
    }
    else
        std::cout << this->_name + " deja en mode Gate keeper.\n";
}

ScavTrap::ScavTrap(const ScavTrap& toCopy)
{
    std::cout << " ♻︎ ♻︎ Copy constructor  ♻︎  ♻︎\n";
    this->_name = toCopy._name;
    this->_energyPoints = toCopy._energyPoints;
    this->_hitPoints = toCopy._hitPoints;
    this->_attackDamage = toCopy._attackDamage;
    this->_gateKeeper = toCopy._gateKeeper;
}

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    this->_gateKeeper = false;
    std::cout << "🚧  🚧 Default constructor for ScavTrap 🚧  🚧\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    this->_gateKeeper = false;
    std::cout << "🚧  🚧 Constructor ScavTrap 🚧  🚧\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "💣 💣 destructor for ScavTrap\n";
}

//operator

void ScavTrap::operator=(ScavTrap second) const {
	(void) second;
}
