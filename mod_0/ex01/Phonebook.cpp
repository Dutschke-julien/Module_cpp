/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:32:56 by event             #+#    #+#             */
/*   Updated: 2023/04/03 14:30:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void   Phonebook::boot_phone1()
{
	int index = 0;

	while(index < 8)
	{
	this->l_contact[index].set_bool(false);
	index++;
	}
}


void	Phonebook::search()
{
	int index = 0;
	std::string prompt;
	std::cout << "			SEARCH INDEX\n";
	std::cout << "<------------------------------------->" << endl;
	std::cout << "|[I]|" << "First_name" << "|" << " Last_name" << "|" << " Nick_name" << "|\n";
	std::cout << "|[1]|" ; this->l_contact[0].print_info();
	std::cout << "|[2]|" ; this->l_contact[1].print_info();
	std::cout << "|[3]|" ; this->l_contact[2].print_info();
	std::cout << "|[4]|" ;	this->l_contact[3].print_info();
	std::cout << "|[5]|" ; this->l_contact[4].print_info();
	std::cout << "|[6]|" ; this->l_contact[5].print_info();
	std::cout << "|[7]|" ; this->l_contact[6].print_info();
	std::cout << "|[8]|" ;this->l_contact[7].print_info();
	std::cout << "<------------------------------------->" << endl;
	std::cout << "Contact: ";
	std::cin >> prompt;
	while (1)
	{
		if (prompt.size() == 1)
		{
			if (prompt[0] > '0' && prompt[0] < '9')
				break;
		}
		std::cout << "error only [1]...[8] is valid" << endl;
		std::cin >> prompt;
	}
	index = std::stoi(prompt);
	this->l_contact[index - 1].print_info_class();
	std::cout << "press enter for return main menue" << endl;
	std::getline(std::cin, prompt);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


void	Phonebook::del_first_contact()
{
	int i = 0;

	while (i < 7)
	{
		this->l_contact[i] = this->l_contact[i + 1];
		i++;
	}
	this->l_contact[7].set_bool(false);
}


void    Phonebook::adding()
{
	int index = 0;
	std::string prompt;

	while (this->l_contact[index].set_bool() == 1 && index < 8)
		index++;
		if (index == 8)
		{
		del_first_contact(); index--;
		}
		ft_print("First name : ");
		getline(std::cin, prompt);
		while (prompt.empty())
		{
			ft_print("Empty prompt not good\n");
			ft_print("First name : ");
			getline(std::cin, prompt);
		}
		this->l_contact[index].add_string(prompt, F_NAME);
		ft_print("Last name : ");
		getline(std::cin,prompt);
		while (prompt.empty())
		{
			ft_print("Empty prompt not good\n");
			ft_print("Last name : ");
			getline(std::cin, prompt);
		}
		this->l_contact[index].add_string(prompt, L_NAME);
		ft_print("Nick name : ");
		getline(std::cin,prompt);
		while (prompt.empty())
		{
			ft_print("Empty prompt not good\n");
			ft_print("Nick name : ");
			getline(std::cin, prompt);
		}
		this->l_contact[index].add_string(prompt, N_NAME);
		ft_print("Phone number : ");
		getline(std::cin,prompt);
		while (this->l_contact->str_num(prompt) != 0)
		{
		ft_print("Phone number : ");
		getline(std::cin,prompt);
		}
		this->l_contact[index].add_string(prompt, P_NUMBER);
		ft_print("👾Darkest secret👾 : ");
		getline(std::cin, prompt);
		this->l_contact[index].add_string(prompt, D_SECRET);
		this->l_contact[index].set_bool(true);
}