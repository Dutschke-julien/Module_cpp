/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:21:02 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/12 17:50:00 by jdutschk         ###   ########.fr       */
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


    //[Liste des surcharges d'operateurs Arythmetique]
    Fixed& operator=(const Fixed& other);
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed& operator--();     // Pré-incrémentation
    Fixed operator--(int);   // Post-incrémentatio n
    Fixed& operator++();     // Pré-incrémentation
    Fixed operator++(int);   // Post-incrémentatio n

    //[liste des surcharge d'operateur de comparaison]
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    //[Liste des fonctions]
    int getRawBits(void) const;
    void setRawbits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed& first, Fixed& second);
    const static Fixed &min(const Fixed& first, const Fixed& second);
    static Fixed &max(Fixed& first, Fixed& second);
    const static Fixed &max(const Fixed& first, const Fixed& second);
    
};

 std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed);

#endif