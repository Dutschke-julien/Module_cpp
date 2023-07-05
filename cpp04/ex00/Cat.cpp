/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:49 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:54:05 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Cat::Cat() : Animal("Cat"){}

Cat::~Cat(){}

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