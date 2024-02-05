/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:58 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:43:24 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#   define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
    //membres
    bool _gateKeeper;
    
    
    public :
    //setup
    ScavTrap();
    ScavTrap(const ScavTrap& toCopy);
    ScavTrap(std::string name);
    ~ScavTrap();

    //methodes
 	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void guardGate();

	//operator 
	void operator=(ScavTrap second) const ;
};

# endif
