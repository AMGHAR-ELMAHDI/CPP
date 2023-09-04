/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:40 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/04 18:16:43 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed	a;
	// Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	Fixed a(10.0f);
	Fixed b(2.5f);
	
	Fixed c;
	c = (a * b);
	std::cout << c << std::endl;
	std::cout << a << std::endl; 
	return 0; 
}
