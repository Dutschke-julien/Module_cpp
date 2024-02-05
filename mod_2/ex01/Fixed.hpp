/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:21:02 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/12 10:51:11 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>
# include <cmath>


class Fixed
{
    private: 
    int value; // Valeur du nombre en virgule fixe
    static const int fractionalBits = 8; // Nombre de bits pour la partie fractionnaire (8 dans cet exercice)

    
    public:
    //[Liste constructeurs | destructeurs de classe]
    Fixed(); //constructeur par default
    Fixed(const int value); //constructeur INT
    Fixed(const float value); //constructeur Float
    Fixed(const Fixed& f);  // constructeur de copie
    ~Fixed(); // destructeur


    //[Liste des surcharges d'operateurs]
    Fixed& operator=(const Fixed& copy);

    //[Liste des fonctions]
    int getRawBits(void) const;
    void setRawbits(int const raw);
    void print_adress(void);
    float toFloat( void ) const;
    int toInt( void ) const;
};

 std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed);

#endif