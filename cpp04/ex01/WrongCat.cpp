/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:11:49 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 15:56:56 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongCat::WrongCat()  : WrongAnimal("WrongCat"){}

WrongCat::~WrongCat(){}

WrongCat::WrongCat(WrongCat& t)
{
	this->type = t.type;	
}

WrongCat& WrongCat::operator=(WrongCat second) 
{
	this->type = second.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMiaouuuuu\n";
}