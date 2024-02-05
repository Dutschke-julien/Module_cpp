/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:00:39 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/04 16:30:24 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
const Animal* meta = new Animal();

const Animal* j = new Dog();

const WrongAnimal* i = new WrongCat();

std::cout << j->getType() << " " << std::endl;

std::cout << i->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!

j->makeSound();

meta->makeSound();



return 0;

}