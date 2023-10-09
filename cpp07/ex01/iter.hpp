/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/09 19:03:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>


// class iter
// {
//     public:
//         iter();
//         iter(const iter &other);
//         iter &operator=(const iter &other);
//         ~iter();

//     //-----------------------------------------------------------------//
	
// };

template<typename T>

void	iter(T &a, T b, T c)
{
	for (size_t i = 0; i < b; i++)
	{
		c(a[i]);
	}	
}

#endif
