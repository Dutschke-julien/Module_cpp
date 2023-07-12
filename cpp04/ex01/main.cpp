/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:00:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/11 15:26:48 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{


Dog i;
Dog j;

Animal *tableau[20];

int index = 0;

	while (index < 20)
	{
		if (index < 10)
			tableau[index] = new(Dog);
		else 
			tableau[index] = new(Cat);
		index++;
	}
	index = 0;
	while (index != 20)
	{
		tableau[index]->makeSound();
		delete tableau[index];
		index++;
	}
return 0;

}