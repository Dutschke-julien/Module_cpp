/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:21:21 by jdutschk          #+#    #+#             */
/*   Updated: 2023/06/13 15:04:59 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructeur / destructeur

Fixed::Fixed() : value (0)
{
}

Fixed::Fixed(const int value)
{
    this->value = value * (1 << fractionalBits);
}

Fixed::Fixed(float value)
{
     this->value = roundf(value * (1 << fractionalBits));
}


Fixed::~Fixed()
{
}


Fixed::Fixed(const Fixed& f)
{ 
    this->value = f.value;
}


// fonctions 
int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawbits(int const raw)
{
    this->value = raw;
}

// fonction exo 01

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->value / (1 << fractionalBits);
}


// fonction exo 02


//Surcharges des operateurs

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->operator++();
	return(temp);
}

Fixed& Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->operator--();
	return(temp);
}

bool Fixed::operator==(const Fixed& copy) const
{
    if (this->value == copy.value)
        return(true);
    return (false);
}   

bool Fixed::operator!=(const Fixed& copy) const
{
    if (this->value != copy.value)
        return(true);
    return (false);
}   

bool Fixed::operator>=(const Fixed& copy) const
{
    if (this->value >= copy.value)
        return(true);
    return (false);
}   

bool Fixed::operator<=(const Fixed& copy) const
{
    if (this->value > copy.value)
        return(false);
    return (true);
}   

bool Fixed::operator<(const Fixed& copy) const
{
    if (this->value > copy.value)
        return(false);
    return (true);
}   

bool Fixed::operator>(const Fixed& copy) const
{
    if (this->value > copy.value)
        return(true);
    return (false);
}   

Fixed& Fixed::operator--(void)
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator/(const Fixed& copy) const
{
    return (this->toFloat() * copy.toFloat());
}   

Fixed Fixed::operator*(const Fixed& copy) const
{
    return (this->toFloat() * copy.toFloat());
}   

Fixed Fixed::operator-(const Fixed& copy) const
{
    return (this->value - copy.value);
}   

Fixed Fixed::operator+(const Fixed& copy) const
{
    return (this->value + copy.value);
}   

Fixed& Fixed::operator=(const Fixed& copy)
{
    if(this != &copy)
        this->value = copy.value;
    return *this;
}

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed)
{
    outstream << fixed.toFloat();
    return outstream;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
    if (first < second)
        return(second);
    return(first);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
    if (first < second)
        return(second);
    return(first);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
    if (first < second)
        return(first);
    return(second);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
    if (first < second)
        return(first);
    return(second);
}