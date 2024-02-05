/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:50:19 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:44:16 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name + " want a HighFives!\n" ;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap " + this->_name + " is destroy and can't attack " + target + "\n";
    else if (this->_energyPoints <= 0)
        std::cout << "FragTrap " + this->_name + " don't have enought energy for doing that\n";
    else
    {
        std::cout << "FragTrap " + this->_name + " attacks " + target + " , causing " << this->_attackDamage << " points of damage!\n";
        this->_energyPoints = this->_energyPoints - 1;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap " + this->_name + " is already destroy\n";
    else
    {
        std::cout << "FragTrap " + this->_name + " take " << amount << " points of damage\n";
        this->_hitPoints  = this->_hitPoints - amount;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap " + this->_name + " is destroy and can't be heal\n";
    else if (this->_hitPoints >= 10)
        std::cout << "FragTrap " + this->_name + " is clearly ok and don't need more hit points\n";
    else
    {
        std::cout << "FragTrap " + this->_name + " Repaired " << amount << "hit points";
        this->_energyPoints  = this->_energyPoints - 1;
    }  
}


FragTrap::FragTrap(const FragTrap& toCopy)
{
    std::cout << " ♻︎ ♻︎ Copy constructor  ♻︎  ♻︎\n";
    this->_name = toCopy._name;
    this->_energyPoints = toCopy._energyPoints;
    this->_hitPoints = toCopy._hitPoints;
    this->_attackDamage = toCopy._attackDamage;
}

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "🚧  🚧 Default constructor for FragTrap 🚧  🚧\n";
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "🚧  🚧 Constructor FragTrap 🚧  🚧\n";
}

FragTrap::~FragTrap()
{
    std::cout << "💣 💣 destructor for FragTrap\n";
}

//operator

void FragTrap::operator=(FragTrap second) const {
	(void) second;
}
