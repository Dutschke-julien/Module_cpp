/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/11 15:03:04 by jdutschk         ###   ########.fr       */
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
	Brain *_brain;

	public : 
	
	//canon form
	Dog();
	virtual ~Dog();
	Dog(Dog& toCopy);
	Dog& operator=(Dog second);

	//methode
	void add_idea(std::string idea, unsigned int index);
	virtual void makeSound() const;
};

#endif