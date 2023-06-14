/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:47:43 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/05 14:11:05 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string prompt;
	Harl karen;
	while(prompt != "stop")
	{
		getline(std::cin, prompt);
		karen.complain(prompt);
	}
}
