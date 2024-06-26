/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 04:40:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/23 18:53:09 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        this->ideas[i] = "no idea";
}

Brain::Brain(std::string newIdea)
{
    std::cout << "Brain Constructor Called" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        this->ideas[i] = newIdea;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

std::string Brain::getIdeas(int index)const
{
    return(this->ideas[index]);
}

void    Brain::setIdeas(std::string newidead, int index)
{
    this->ideas[index] = newidead;
}
