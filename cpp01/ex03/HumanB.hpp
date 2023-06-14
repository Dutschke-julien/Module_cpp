/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/08 15:36:26 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name, Weapon& arme);
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& arme);
	void attack();
	
	private:
	Weapon *arme;
	std::string name;
};

#endif