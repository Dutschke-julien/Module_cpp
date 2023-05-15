/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:18 by jdutschk          #+#    #+#             */
/*   Updated: 2023/05/12 15:19:06 by jdutschk         ###   ########.fr       */
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
			

	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
};

#endif