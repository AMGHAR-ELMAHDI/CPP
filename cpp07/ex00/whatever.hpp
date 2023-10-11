/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/11 16:22:06 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>


class whatever
{
    public:
        whatever();
        whatever(const whatever &obj);
        whatever &operator=(const whatever &other);
        ~whatever();
};

template<typename T>

void	swap(T &a, T &b)
{
	T	t;

	t = a;
	a = b;
	b = t;
}

template<typename T>

T	min(T const &a, T const &b)
{
	if(a < b)
		return(a);
	return(b);
}


template<typename T>

T	max(T const &a, T const &b)
{
	if(a > b)
		return(a);
	return(b);
}

#endif
