/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/16 19:39:36 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>

template<typename T>

void	easyfind(T &a, int num)
{
	typename T::iterator it;

	if ((it = std::find(a.begin(), a.end(), num)) != a.end())
		std::cout << "found number at index: " << *it << std::endl;
	else
		throw std::out_of_range();
}


#endif
