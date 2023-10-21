/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/20 20:54:17 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default Constructor Called " << std::endl; 
    this->num = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called " << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called " << std::endl;
    return(this->num);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called " << std::endl; 
    this->num = raw;
};

Fixed::Fixed(const Fixed &obj)
{
   std::cout << "Copy constructor Called " << std::endl;
   *this = obj;
}
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement opperator called " << std::endl; 
    if (this != &other)
        this->num = other.getRawBits();
    return *this;
}
