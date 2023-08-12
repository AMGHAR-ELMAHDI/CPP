/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:02:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 18:35:57 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void Contact::setFirstName(std::string str)
{
    this->firstName = str;
}

std::string Contact::getFirstName(void)
{
    return(this->firstName);
}

void Contact::setlastName(std::string str)
{
    this->lastName = str;
}

std::string Contact::getlastName(void)
{
    return(this->lastName);
}

void Contact::setnickname(std::string str)
{
    this->nickname = str;
}

std::string Contact::getnickname(void)
{
    return(this->nickname);
}

void Contact::setdarkestSecret(std::string str)
{
    this->darkestSecret = str;
}

std::string Contact::getdarkestSecret(void)
{
    return(this->darkestSecret);
}

void Contact::setphoneNumber(std::string str)
{
    this->phoneNumber = str;
}

std::string Contact::getphoneNumber(void)
{
    return(this->phoneNumber);
}

