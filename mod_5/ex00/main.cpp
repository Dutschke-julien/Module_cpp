/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:46:14 by jdutschk          #+#    #+#             */
/*   Updated: 2024/02/09 15:26:14 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b1("John", 151);
        std::cout << b1;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}