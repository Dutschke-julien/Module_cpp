/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:37 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/12 15:32:13 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain()
{
	std::cout << "constructor Brain\n";
}

Brain::~Brain()
{
	std::cout << "destructor Brain\n";
}

Brain::Brain(Brain& toCopy)
{
	std::cout << "copy constructor Brain\n";
	for (int i = 0; i < 100; i++)
		this->_listOfIdeas[i] = toCopy._listOfIdeas[i];
}

Brain& Brain::operator=(Brain &second)
{
	std::cout << "Operator = for Brain\n";
	for (int i = 0; i < 100; i++)
		this->_listOfIdeas[i] = second._listOfIdeas[i];
	return(*this);
}

void Brain::add(std::string idea, unsigned int index)
{
	this->_listOfIdeas[index] = idea;

	int i = 0;

	while (i < 100)
	{
		if (_listOfIdeas[i] == "")
			i++;
		else
		{
		std::cout << "[" + _listOfIdeas[i] + "]\n";
		i++;
		}
	}
}