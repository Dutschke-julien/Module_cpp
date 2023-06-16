/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:41:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/16 14:24:12 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap machine("machine");

    machine.attack("truc");
    
    machine.beRepaired(1);
    machine.takeDamage(10);
    machine.takeDamage(1);
    machine.attack("truc");
    machine.beRepaired(1);
    
    return (0);
}