/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/13 15:15:11 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default Constructor Called " << std::endl;
    this->num = 0;
}

Fixed::Fixed(const Fixed &obj)
{
   std::cout << "Copy constructor Called " << std::endl;
   *this = obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called " << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "GetRawBits member function called " << std::endl;
    return(this->num);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "SetRawBits member function called " << std::endl; 
    this->num = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement opperator called " << std::endl; 
    if (this != &other)
        this->num = other.num;
    return *this;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int Constructor Called " << std::endl;
    this->num = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float Constructor Called " << std::endl; 
    this->num = roundf( n * ( 1 << fractionalBits ));
}

float Fixed::toFloat( void ) const
{
    float ret = 0;
    
    ret = (float)this->num / (1 << fractionalBits);
    return(ret);
}

int Fixed::toInt( void ) const
{
    float ret;
    
    ret = this->num >> fractionalBits;
    return(ret);
}

std::ostream    &operator<<(std::ostream &os, Fixed const &dt)
{
    os << dt.toFloat();
    return os;
}
