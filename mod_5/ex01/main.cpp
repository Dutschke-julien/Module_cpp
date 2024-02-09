/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:46:14 by jdutschk          #+#    #+#             */
/*   Updated: 2024/02/09 15:53:27 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 1);
        Form f1("Form1", 1, 1);

        f1.execForm(b1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}