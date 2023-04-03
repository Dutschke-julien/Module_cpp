/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:56:59 by event             #+#    #+#             */
/*   Updated: 2023/03/30 14:03:35 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string strtoupper(std::string str)
{
    int i = 0;

    while(str[i])
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    return(str);
}



int    ft_print(std::string message)
{
    std::cout << message;
    return (message.length());
}