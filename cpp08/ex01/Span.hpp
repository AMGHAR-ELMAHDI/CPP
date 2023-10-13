/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/13 20:33:02 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


class Span
{
    public:
        Span();
        Span(const Span &obj);
        Span &operator=(const Span &other);
        ~Span();

		//----------------------Exceptions---------------------------//
		class IndexIsOutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Index is out of bounds exception called");
				}
		};
};

// template<typename T>


#endif
