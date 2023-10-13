/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/13 20:28:43 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class IndexIsOutOfBounds : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return("Index is out of bounds exception called");
		}
};

template<typename T>

void	easyfind(T a, int num)
{
	std::vector<int> numVector = a;	
	int		found = -1;

	for (size_t i = 0; i < numVector.size(); i++)
	{
		if(numVector[i] == num)
		{
			found = i;
			break;
		}
	}
	
	if(found != -1)
		std::cout << "Found " << num << " at index: " << found << std::endl;
	else
		throw IndexIsOutOfBounds();
}

#endif
