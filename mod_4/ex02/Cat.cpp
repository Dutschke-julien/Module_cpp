/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:49 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/12 15:28:31 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
	//std::cout << "constructor Cat call\n";
	this->_brain = new(Brain);
}

Cat::~Cat()
{
	//std::cout << "destructor Cat call\n";
	delete this->_brain;
}

Cat::Cat(Cat& t)
{
	this->type = t.type;
	this->_brain = new(Brain);
	*_brain = *t._brain;
}

Cat& Cat::operator=(Cat &second) 
{
	Animal::operator=(second);

	*this->_brain = *second._brain;

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miaouuuuu\n";
}

void Cat::add_idea(std::string idea, unsigned int index)
{
	if (index >= 100 || index < 0)
		return ;
	else
		this->_brain->add(idea, index);		
}