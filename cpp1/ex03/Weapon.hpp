/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/05 18:46:54 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>
# define endl "\n"

class Weapon
{
	public:
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType();	
	void			setType(std::string new_type);

	private:
	std::string type;
};

#endif