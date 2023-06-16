/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:58 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/16 13:43:22 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#   define CLAPTRAP_HPP

#   include <iostream>
#   include <string>

class ClapTrap
{
    
    private :
    
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
	
	
};

# endif
