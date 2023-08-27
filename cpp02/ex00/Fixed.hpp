/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:31:29 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/27 20:29:42 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

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
        Fixed(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator=(const Fixed &other);
};


#endif
