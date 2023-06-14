/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:25:33 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/08 16:33:18 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main()
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}





/* Main for check address for a and b and see if operator = is correct
int main()
{
    Fixed a;
    Fixed b(a);
    b = a;
    std::cout << "class Fixed a ";
    a.print_adress();
    std::cout << "class de copy b";
    b.print_adress();
    return 0;
}
*/