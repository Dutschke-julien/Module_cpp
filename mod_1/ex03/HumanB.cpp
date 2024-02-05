/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:36:42 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/08 15:36:37 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::~HumanB(){}

HumanB::HumanB(std::string name, Weapon& arme) : name(name), arme(&arme){}

HumanB::HumanB(std::string name) : name(name), arme(nullptr){}

void HumanB::setWeapon(Weapon& arme)
{
	this->arme = &arme;
}

void HumanB::attack(void){
std::cout << this->name + " attacks with their " + this->arme->getType() + endl ;
}
