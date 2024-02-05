/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:58 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:45:00 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#   define CLAPTRAP_HPP

#   include <iostream>
#   include <string>


class ClapTrap
{
    
    protected: 
    
	//membres
	std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
    
	public :
	
	//setup	
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& toCopy);
	~ClapTrap();

	//methodes
 	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//operator 
	void operator=(ClapTrap second) const ;
	
	
};

#	include "ScavTrap.hpp"
#	include "FragTrap.hpp"

# endif
