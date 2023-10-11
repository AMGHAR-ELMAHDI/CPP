/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:02:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/25 22:03:51 by eamghar          ###   ########.fr       */
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

//-----------------------------------------//

void Contact::setFirstNameFull(std::string str)
{
    this->firstNameFull = str;
}

std::string Contact::getFirstNameFull(void)
{
    return(this->firstNameFull);
}

void Contact::setlastNameFull(std::string str)
{
    this->lastNameFull = str;
}

std::string Contact::getlastNameFull(void)
{
    return(this->lastNameFull);
}

void Contact::setnicknameFull(std::string str)
{
    this->nicknameFull = str;
}

std::string Contact::getnicknameFull(void)
{
    return(this->nicknameFull);
}

void Contact::setdarkestSecretFull(std::string str)
{
    this->darkestSecretFull = str;
}

std::string Contact::getdarkestSecretFull(void)
{
    return(this->darkestSecretFull);
}

void Contact::setphoneNumberFull(std::string str)
{
    this->phoneNumberFull = str;
}

std::string Contact::getphoneNumberFull(void)
{
    return(this->phoneNumberFull);
}
