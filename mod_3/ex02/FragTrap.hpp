/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:58 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 10:44:45 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#   define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :
    //membres
    
    
    public :
    //setup
    FragTrap();
    FragTrap(const FragTrap& toCopy);
    FragTrap(std::string name);
    ~FragTrap();

    //methodes
 	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void highFivesGuys(void);

	//operator 
	void operator=(FragTrap second) const ;
};

# endif
