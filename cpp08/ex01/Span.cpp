/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:30:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/17 17:38:04 by eamghar          ###   ########.fr       */
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
    if(this != &other)
    {
        this->num = other.num;
        this->vec = other.vec;
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
    else
        throw std::runtime_error("Out of Range");
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Cannot find span. Insufficient numbers.");

    std::vector<int> v = this->vec;

    std::sort(v.begin(), v.end());
    
    int shortest = v[1] - v[0];
    for (size_t i = 2; i < v.size(); i++)
    {
        int span = v[i] - v[i - 1];
        shortest = std::min(shortest, span);
    }

    return shortest;
}

int Span::longestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Cannot find span. Insufficient numbers.");

    std::vector<int> v = this->vec;

    std::sort(v.begin(), v.end());

    int longest = v[v.size() - 1] - v[0];
    return longest;
}

void	Span::fillSpan(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2)
{
     if(this->vec.size() + std::distance(it1, it2) <= this->num)
        vec.insert( vec.end(), it1, it2 );
    else
        throw std::runtime_error("Out of Range");
}

void	Span::printValues()
{
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::cout << "Value: " << this->vec[i] << std::endl;
    }
}

