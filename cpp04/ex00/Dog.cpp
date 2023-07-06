/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:53 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:54:36 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"

Dog::Dog() : Animal ("Dog"){}

Dog::~Dog(){}

Dog::Dog(Dog& t)
{
	this->type = t.type;	
}

Dog& Dog::operator=(Dog second) 
{
	this->type = second.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "uaf uaf\n";
}

