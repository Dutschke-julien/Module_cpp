/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:34:51 by event             #+#    #+#             */
/*   Updated: 2023/04/03 13:54:07 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


void Contact::print_info_class()
{
    std::cout << "First_name: " << first_name << endl;
    std::cout << "Last_name: " << last_name << endl;
    std::cout << "Nick_name: " << nick_name << endl;
    std::cout << "Phone number: " << phone_number << endl;
    std::cout << "Darkest secret: " << darkest_secret << endl;
}


void   	Contact::print_info()
{
    std::string cpy;
    if (this->first_name.size() > 10)
    {
        cpy = this->first_name.substr(0,10);
        cpy[9] = '.';
    }
    else
        cpy = this->first_name;
    std::cout << std::right << std::setw(10) << cpy <<  '|';
        if (this->last_name.size() > 10)
    {
        cpy = this->last_name.substr(0,10);
        cpy[9] = '.';
    }
    else
        cpy = this->last_name;
    std::cout << std::right << std::setw(10) << cpy << '|';
        if (this->nick_name.size() > 10)
    {
        cpy = this->nick_name.substr(0,10);
        cpy[9] = '.';
    }
        else cpy = this->nick_name;
     std::cout << std::right << std::setw(10) << cpy << '|' << endl;

}


int Contact::str_num(std::string liste)
{
    int index = 0;
    while (index != liste.size())
    {
        if (std::isdigit(liste[index]) && liste.size() == 10)
            index++;
        else
            return (ft_print("Error, Wrong answers, try again\n"));        
    }
        return (0);
}

void    Contact::add_string(std::string str, int info)
{
    if  (info == 0)
        this->first_name = str;
    else if (info == 1)
        this->last_name = str;
    else if (info == 2)
        this->nick_name = str;
    else if (info == 3)
        this->phone_number = str;
    else if (info == 4)
        this->darkest_secret = str;
    else
        return ;
}

bool    Contact::set_bool()
{
    return(this->used);
}

void    Contact::set_bool(bool value)
{
    this->used = value;
}
