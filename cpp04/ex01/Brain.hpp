/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:12:08 by jdutschk          #+#    #+#             */
/*   Updated: 2023/07/06 18:01:58 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{	

	public :
	Brain();
	~Brain();
	Brain(Brain& toCopy);
	Brain& operator=(Brain &second);
	
	private:
	std::string _listOfIdeas[100];
	
};

#endif