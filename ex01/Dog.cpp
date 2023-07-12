/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:53 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/11 15:11:42 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "constructor Dog call\n";
	this->_brain = new(Brain);
}

Dog::~Dog()
{
	std::cout << "destructor Dog call\n";
	delete this->_brain;
}

Dog::Dog(Dog& t)
{
	this->type = t.type;
	this->_brain = new(Brain);
	*_brain = *t._brain;
}

Dog& Dog::operator=(Dog second) 
{
	this->type = second.type;
	*this->_brain = *second._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "uaf uaf\n";
}

void Dog::add_idea(std::string idea, unsigned int index)
{
	if (index >= 100 || index < 0)
		return ;
	else
		this->_brain->add(idea, index);		
}