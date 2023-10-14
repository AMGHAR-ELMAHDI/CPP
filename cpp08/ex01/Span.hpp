/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/14 16:08:01 by eamghar          ###   ########.fr       */
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
	private:
		std::vector<int> vec;
		unsigned int num;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &other);
        ~Span();

		//----------------------AddNumber---------------------------//
		void	addNumber(int n);

		//----------------------shortestSpan---------------------------//
		int		shortestSpan();
		
		//----------------------longestSpan---------------------------//
		int		longestSpan();
		
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

#endif
