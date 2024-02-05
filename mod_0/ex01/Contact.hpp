/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:41:49 by event             #+#    #+#             */
/*   Updated: 2023/04/03 13:50:57 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Phonebook.hpp"

class Contact
{
	public:
			
			void    set_contact();
			void    print_contact();
			void    set_bool(bool value);
			bool    set_bool();
			void    add_string(std::string str, int info);
			int		str_num(std::string liste);
			void 	print_info();
			void	print_info_class();
	
	private:
			std::string first_name;
			std::string last_name;
			std::string nick_name;
			std::string phone_number;
			std::string darkest_secret;
			bool    used;
};

#endif