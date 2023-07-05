/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:49 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/05 15:35:37 by jdutschk         ###   ########.fr       */
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
	delete (this->_brain);
}

Cat::Cat(Cat& t)
{
	this->type = t.type;	
}

Cat& Cat::operator=(Cat second) 
{
	this->type = second.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miaouuuuu\n";
}