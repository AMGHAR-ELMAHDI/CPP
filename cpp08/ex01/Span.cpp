/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:30:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/13 23:50:59 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : num(0)
{
    std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : num(N)
{
    std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(const Span &obj)
{
   std::cout << "Span Copy constructor Called " << std::endl;
   *this = obj;
}

Span &Span::operator=(const Span &other)
{
    std::cout << "Span Copy assignement opperator called " << std::endl; 
    {
        this->num = other.num;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "Span Destructor called" << std::endl;
}

void	Span::addNumber(int n)
{
    if(this->arr.size() < this->num)
        this->arr.push_back(n);
}

void	Span::shortestSpan()
{
    for (size_t i = 0; i < this->arr.size(); i++)
    {
        
    }
    
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error("Cannot find span. Insufficient numbers.");

    std::sort(numbers.begin(), numbers.end());

    int longest = numbers[numbers.size() - 1] - numbers[0];
    return longest;
}

