/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/14 15:58:51 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>

class IndexIsOutOfBounds : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return("Index is out of bounds exception called");
		}
};

template<typename T>

void	easyfind(T &a, int num)
{
	typename T::iterator it;

	if ((it = std::find(a.begin(), a.end(), num)) != a.end())
		std::cout << "found number at index: " << *it << std::endl;
	else
		throw IndexIsOutOfBounds();
}


#endif
