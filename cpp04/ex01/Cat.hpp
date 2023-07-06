/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/06 17:54:57 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	protected :
	std::string type;
	Brain *_brain;

	public : 
	
	//canon form
	Cat();
	virtual ~Cat();
	Cat(Cat& toCopy);
	Cat& operator=(Cat &second);

	//methode
	virtual void makeSound() const;
};

#endif