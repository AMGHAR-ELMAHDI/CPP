/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/16 22:46:37 by eamghar          ###   ########.fr       */
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
			
		};
		
        MutantStack(const MutantStack &obj)
		{
			*this = obj;
		};
		
        MutantStack &operator=(const MutantStack &other)
		{
			(void)other;
		};
		
        ~MutantStack()
		{

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
