/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:32:25 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/18 04:32:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
    std::cout << "Default Destructor Called " << std::endl; 
}
Fixed::Fixed()
{
    this->num = 0;
    std::cout << "Default Constructor Called " << std::endl; 
};

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