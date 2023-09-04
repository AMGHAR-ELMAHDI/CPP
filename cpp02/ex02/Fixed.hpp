/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:31:29 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/04 16:39:34 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<string>
#include<fstream>

class Fixed
{
    private:
        int                 num;
        static const int    fractionalBits;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(const Fixed &other);
        //-----The 4 arithmetic operators: +, -, *, and / ----/
        Fixed &operator+(const Fixed &other)const;
        Fixed &operator-(const Fixed &other)const;
        Fixed &operator*(const Fixed &other)const;
        Fixed &operator/(const Fixed &other)const;
        //-----The 6 comparison operators: >, <, >=, <=, == and != -----/
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        //-----The 4 increment/decrement -----/
        Fixed &operator++();
        Fixed &operator--();
        Fixed &operator++(int);
        Fixed &operator--(int);
        //-----The overloaded member functions -----/
        static const Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &dt);

#endif
