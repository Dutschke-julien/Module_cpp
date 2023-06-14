/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:21:21 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/12 10:17:12 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructeur / destructeur

Fixed::Fixed() : value (0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    this->value = value * (1 << fractionalBits);
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called\n";
     this->value = roundf(value * (1 << fractionalBits));
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}


Fixed::Fixed(const Fixed& f)
{ 
    std::cout << "Copy constructor called\n";
    this->value = f.value;
}


// fonctions 
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (value);
}

void Fixed::setRawbits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << fractionalBits);
}


int Fixed::toInt(void) const
{
    return this->value / (1 << fractionalBits);
}


void Fixed::print_adress(void)
{
    std::cout <<"adresse de la variable nbr   " << &this->value << "\n";
}


//Surcharges des operateurs
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &copy)
        this->value = copy.value;
    return *this;
}   

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed)
{
    outstream << fixed.toFloat();
    return outstream;
}
