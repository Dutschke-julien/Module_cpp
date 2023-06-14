/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:36:42 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/08 15:16:01 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::~HumanA(){}

HumanA::HumanA(std::string name, Weapon& arme) : name(name), arme(arme){}

void HumanA::attack(void){
	std::cout << this->name + " attacks with their " + this->arme.getType() + endl ;
}
