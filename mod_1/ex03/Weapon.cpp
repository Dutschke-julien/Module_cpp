/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:32:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/08 14:19:58 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type) : type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType(){
	std::string& REF = this->type;
	return(REF);
}

void Weapon::setType(std::string type){
	this->type = type;
}