/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/05 14:03:07 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

# include <iostream>
# include <string>
# define endl "\n"

class Harl
{
	public:
  			void complain( std::string level);
			Harl();
			~Harl();
			
	private:
			void (Harl::*lvl_lst[4])(void);
			std::string brain[4];
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
};

#endif
