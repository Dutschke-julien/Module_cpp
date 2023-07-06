/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:49 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/06 18:03:09 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "constructor Cat call\n";
	this->_brain = new(Brain);
}

Cat::~Cat()
{
	std::cout << "destructor Cat call\n";
	delete this->_brain;
}

Cat::Cat(Cat& t)
{
	this->type = t.type;
	this->_brain = new(Brain);
	_brain = t._brain;
}

Cat& Cat::operator=(Cat &second) 
{
	Animal::operator=(second);

	this->_brain = second._brain;

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miaouuuuu\n";
}