/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/04 18:28:34 by eamghar          ###   ########.fr       */
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
    std::cout << "Int Constructor Called " << std::endl; 
    this->num = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float Constructor Called " << std::endl; 
    this->num = roundf( n * ( 1 << fractionalBits ));
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

float Fixed::toFloat( void ) const
{
    return((float)this->num / (float)256);
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

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement opperator called " << std::endl; 
    if (this != &other)
        this->num = other.num;
    return *this;
}

Fixed Fixed::operator+(const Fixed &other)const
{
    Fixed result;

    if (this != &other)
        result.num = this->num + other.num;
    return result;
}

Fixed Fixed::operator-(const Fixed &other)const
{
    Fixed result;

    if (this != &other)
        result.num = this->num - other.num;
    return result;
}

Fixed Fixed::operator*(const Fixed &other)const
{
    Fixed result;

    if (this != &other)
        result.setRawBits(this->getRawBits() * (other.toFloat()));

    return result;
}

Fixed Fixed::operator/(const Fixed &other)const
{
    Fixed result;

    if (this != &other)
        result.num = (this->num << fractionalBits) * other.num;
    return result;
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this != &other)
        if(this->num > other.num)
            return (true);
    return false;
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this != &other)
        if(this->num < other.num)
            return (true);
    return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this != &other)
        if(this->num >= other.num)
            return (true);
    return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this != &other)
        if(this->num <= other.num)
            return (true);
    return false;
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this != &other)
        if(this->num == other.num)
            return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this != &other)
        if(this->num != other.num)
            return (true);
    return false;
}

Fixed &Fixed::operator++()
{
    this->num++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->num--;
    return *this;
}

Fixed &Fixed::operator++(int)
{
    this->num++;
    return *this;
}

Fixed &Fixed::operator--(int)
{
    this->num--;
    return *this;
}

const Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.num < b.num)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.num < b.num)
		return a;
	return b;
}

const Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.num > b.num)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.num > b.num)
		return a;
	return b;
}
