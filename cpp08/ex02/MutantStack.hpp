/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/18 18:54:21 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>

class MutantStack : public std::stack <T>
{
    public:
        MutantStack()
		{
    		std::cout << "MutantStack Default constructor called" << std::endl;
		};
		
        MutantStack(const MutantStack &obj)
		{
   			std::cout << "MutantStack Copy constructor Called " << std::endl;
			*this = obj;
		};
		
        MutantStack &operator=(const MutantStack &other)
		{
    		std::cout << "MutantStack Copy assignement opperator called " << std::endl; 
			(void)other;
		};
		
        ~MutantStack()
		{
    		std::cout << "MutantStack Destructor called" << std::endl;
		};
		
		typedef std::deque<int >::iterator it;

		it	begin()
		{
			return this->c.begin();
		}

		it	end()
		{
			return this->c.end();
		}
};

#endif
