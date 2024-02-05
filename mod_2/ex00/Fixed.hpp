/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:21:02 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/12 09:02:38 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define NUMBER 0

# include <iostream>

class Fixed
{
    private: 
    int value; // Valeur du nombre en virgule fixe
    static const int fractionalBits = 8; // Nombre de bits pour la partie fractionnaire (8 dans cet exercice)

    
    public:
    //[Liste constructeurs | destructeurs de classe]
    Fixed(); //constructeur
    Fixed(const Fixed& f);  // constructeur de copie
    ~Fixed(); // destructeur


    //[Liste des surcharges d'operateurs]
    Fixed& operator=(const Fixed& copy);


    //[Liste des fonctions]
    int getRawBits(void) const;
    void setRawbits(int const raw);
    void print_adress(void);
};

#endif