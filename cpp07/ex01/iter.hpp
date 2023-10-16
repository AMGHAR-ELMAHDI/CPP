/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/16 14:34:30 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>

void	iter(T *a, size_t  length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
	{
		func(a[i]);
	}	
}

template < typename T >

void    printElements(T &value)
{
    std::cout << value << std::endl;
}

#endif
