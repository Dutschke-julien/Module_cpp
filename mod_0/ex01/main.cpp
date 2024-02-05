/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:33:28 by event             #+#    #+#             */
/*   Updated: 2023/04/03 14:08:18 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Welcome()
{
	 std::cout <<"            "<< "🍺 BeerPhone 🍺" << endl << endl;
	 std::cout <<"         "<< "[ADD] [SEARCH] [EXIT]" << endl << endl;
	 std::cout <<"            " << "   ↓     ↓"<< endl;
}

int main()
{
	std::string prompt = ("");
	Phonebook   carnet;

	carnet.boot_phone1();
	while(1)
	{
	Welcome();
	getline(std::cin, prompt);
	prompt = strtoupper(prompt);
	if (prompt.compare("ADD") == 0)
		carnet.adding();
	else if (prompt.compare("SEARCH") == 0)
	{
		carnet.search();
	}
	else if (prompt.compare("EXIT") == 0)
	{
		ft_print("🍺 BeerPhone 🍺 : GOOD BEY\n");
		break;
	}
	else
		ft_print("🍺 BeerPhone 🍺 : Wrong answer, check if you add space , tabulations , . . .\n");
	}
	return(EXIT_SUCCESS);
}
 