/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 04:39:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/17 01:27:55 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN

#include<iostream>
#include<string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string newIdea, int index);
        Brain(const Brain &obj);
        Brain &operator=(const Brain &other);
        ~Brain();
        std::string getIdeas(int index)const;
        void setIdeas(std::string newidead, int index);
};

#endif