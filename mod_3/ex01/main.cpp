/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:41:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/28 18:25:09 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap machine("machine");
    
    ScavTrap machine2;

    machine2.guardGate();
    machine2.guardGate();
    return (0);
}