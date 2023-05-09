/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:59:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/09 17:55:35 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4){
		std::cerr << "Error\nnumbers of arguments inccorect\n";
		return (1);
	}
	
	std::string filename = av[1];
	std::ifstream input_file(filename);
	
	if(input_file.is_open() == false)
	{
		std::cerr << "Error\nwith input file\n";
		return (2);
	}
	std::ofstream output_file(filename + ".replace");
	if(output_file.is_open() == false)
	{
		std::cerr << "Error\nwith output file\n";
		input_file.close();
		return (3);
	}
	input_file.close();
	output_file.close();
}