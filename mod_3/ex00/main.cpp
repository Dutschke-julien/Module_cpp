/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:41:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/03 16:16:03 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap machine("machine");

    ClapTrap machine2("machine2");

    machine.attack("truc");
    
    machine.beRepaired(1);
    machine.takeDamage(10);
    machine.takeDamage(1);
    machine.attack("truc");
    machine.beRepaired(1);
    
    return (0);
}
