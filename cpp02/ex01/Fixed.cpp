/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/27 21:54:23 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default Constructor Called " << std::endl; 
    this->num = 0;
}

Fixed::Fixed(const int n)
{
    std::cout << "Constant integer Constructor Called " << std::endl; 
    this->num = 0;
    this->num = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Constant floating-point number Constructor Called " << std::endl; 
    num = (int)roundf(n * pow(2, fractionalBits));
}

Fixed::Fixed(const Fixed &obj)
{
   std::cout << "Copy constructor Called " << std::endl;
   *this = obj;
}

Fixed::~Fixed()
{
    std::cout << "Default Destructor Called " << std::endl;
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

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement opperator called " << std::endl; 
    if (this != &other)
        this->num = other.num;
    return *this;
}

float Fixed::toFloat( void ) const
{
    float ret = 0;
    
    ret = this->num / (pow(2, fractionalBits));
    return(ret);
};


int Fixed::toInt( void ) const
{
    float ret;
    
    ret = this->num >> fractionalBits;
    return(ret);
};

std::ostream    &operator<<(std::ostream& os, const Fixed& dt)
{
    os << dt.getRawBits();
    return os;
}