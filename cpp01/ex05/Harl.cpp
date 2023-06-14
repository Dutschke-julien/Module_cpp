/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:49:01 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/13 16:23:39 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "WARNING WARNING !!! Karen is in the fast-food\n\n\n" << endl;
	lvl_lst[0] = &Harl::debug;
	lvl_lst[1] = &Harl::info;
	lvl_lst[2] = &Harl::warning;
	lvl_lst[3] = &Harl::error;
	this->brain[0] = "DEBUG";
	this->brain[1] = "INFO";
	this->brain[2] = "WARNING";
	this->brain[3] = "ERROR";
}

Harl::~Harl(){std::cout << "\n\nfiouuu she's finally leave" << endl;}





void Harl::complain( std::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (level.compare(this->brain[i]) == 0)
		{
			(this->*(lvl_lst[i]))();
			return ;
		}
		i++;
	}	
}



void Harl::debug(void)
{
	std::cout << "Love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !\n";
}

void Harl::info(void)
{
	std::cout << "Cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning(void)
{
	std::cout << "Think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}
