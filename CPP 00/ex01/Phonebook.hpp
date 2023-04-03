/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:41:59 by event             #+#    #+#             */
/*   Updated: 2023/04/03 13:34:36 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#   define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

#define endl "\n"
#define F_NAME 0
#define L_NAME 1
#define N_NAME 2
#define P_NUMBER 3
#define D_SECRET 4


class Phonebook
{

    public:
            void adding();
            void del_first_contact();
            void search();
            void boot_phone1();
        //     int  check_place();

    private:
        Contact l_contact[8];

};



//                      utils                   //
        std::string strtoupper(std::string str);
        int    ft_print(std::string message);


#endif