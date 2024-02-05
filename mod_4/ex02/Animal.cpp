/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:55 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/12 15:52:58 by jdutschk         ###   ########.fr       */
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

Animal& Animal::operator=(Animal &second) 
{
	this->type = second.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return(this->type);
}