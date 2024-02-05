/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:03:04 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:55:25 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){}

WrongAnimal::WrongAnimal(std::string name) : type(name){}

WrongAnimal::~WrongAnimal(){}

WrongAnimal::WrongAnimal(WrongAnimal& t)
{
	this->type = t.type;	
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal second) 
{
	this->type = second.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Random noise\n";
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}