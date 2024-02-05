/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:31:33 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:41:48 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//setup

ClapTrap::ClapTrap() : _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "🚧  🚧 Default constructor for ClapTrap 🚧  🚧\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "🚧  🚧 Constructor with string_param [" + name + "] for ClapTrap 🚧  🚧\n";
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
    std::cout << " ♻︎ ♻︎ Copy constructor  ♻︎  ♻︎\n";
    this->_name = toCopy._name;
    this->_energyPoints = toCopy._energyPoints;
    this->_hitPoints = toCopy._hitPoints;
    this->_attackDamage = toCopy._attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "💣 💣 destructor" << "[" + this->_name + "] for ClapTrap\n";
}

//methodes

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " + this->_name + " is destroy and can't attack " + target + "\n";
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " + this->_name + " don't have enought energy for doing that\n";
    else
    {
        std::cout << "ClapTrap " + this->_name + " attacks " + target + " , causing " << this->_attackDamage << " points of damage!\n";
        this->_energyPoints = this->_energyPoints - 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " + this->_name + " is already destroy\n";
    else
    {
        std::cout << "ClapTrap " + this->_name + " take " << amount << " points of damage\n";
        this->_hitPoints  = this->_hitPoints - amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " + this->_name + " is destroy and can't be heal\n";
    else if (this->_hitPoints >= 10)
        std::cout << "ClapTrap " + this->_name + " is clearly ok and don't need more hit points\n";
    else
    {
        std::cout << "ClapTrap " + this->_name + " Repaired " << amount << "hit points";
        this->_energyPoints  = this->_energyPoints - 1;
    }  
}

//operator

void ClapTrap::operator=(ClapTrap second) const {
	(void) second;
}
