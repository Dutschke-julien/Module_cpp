/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/06 17:54:12 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class Animal
{
	protected :
	std::string type;

	public : 
	
	//canon form
	Animal();
	Animal(std::string str);
	virtual ~Animal();
	Animal(Animal& toCopy);
	Animal& operator=(Animal &second);

	//methode
	virtual void makeSound() const;
	virtual std::string getType(void) const;
};


# include "Cat.hpp"
# include "Dog.hpp"

#endif