/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:30:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/14 16:07:20 by eamghar          ###   ########.fr       */
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
    if(this->vec.size() < this->num)
        this->vec.push_back(n);
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Cannot find span. Insufficient vec.");

    std::sort(vec.begin(), vec.end());

    int shortest = vec[1] - vec[0];
    for (size_t i = 2; i < vec.size(); i++)
    {
        int span = vec[i] - vec[i - 1];
        shortest = std::min(shortest, span);
    }

    return shortest;
}

int Span::longestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Cannot find span. Insufficient vec.");

    std::sort(vec.begin(), vec.end());

    int longest = vec[vec.size() - 1] - vec[0];
    return longest;
}

