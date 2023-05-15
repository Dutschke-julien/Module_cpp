/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:59:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/12 13:17:41 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void start_convert_all(std::ifstream& input_file, std::ofstream& output_file, std::string word_to_replace, std::string new_word)
{
	if (word_to_replace == "")
		return ;
    std::string line;
    input_file.seekg(0, std::ios::beg);
    std::getline(input_file, line, '\0');

	size_t pos = 0;
    while ((pos = line.find(word_to_replace, pos)) != std::string::npos)
    {
        line.erase(pos, word_to_replace.length());
        line.insert(pos, new_word);
        pos += new_word.length();
    }
	output_file << line;
}

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
	start_convert_all(input_file, output_file, av[2], av[3]);
	input_file.close();
	output_file.close();
}