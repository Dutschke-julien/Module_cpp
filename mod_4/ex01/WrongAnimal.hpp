/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:56:12 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected :
	std::string type;

	public : 
	
	//canon form
	WrongAnimal();
	WrongAnimal(std::string name);
	~WrongAnimal();
	WrongAnimal(WrongAnimal& toCopy);
	WrongAnimal& operator=(WrongAnimal second);

	//methode
	void makeSound() const ;
	std::string getType(void) const ;
};

#include "WrongCat.hpp"

#endif