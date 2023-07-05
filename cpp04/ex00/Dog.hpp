/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:48:31 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	protected :
	std::string type;

	public : 
	
	//canon form
	Dog();
	virtual ~Dog();
	Dog(Dog& toCopy);
	Dog& operator=(Dog second);

	//methode
	virtual void makeSound() const;
};

#endif