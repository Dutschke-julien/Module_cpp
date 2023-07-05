/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:55 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:52:45 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){}

Animal::Animal(std::string str) : type(str){}

Animal::~Animal(){}

Animal::Animal(Animal& t)
{
	this->type = t.type;	
}

Animal& Animal::operator=(Animal second) 
{
	this->type = second.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Random noise\n";
}

std::string Animal::getType(void) const
{
	return(this->type);
}