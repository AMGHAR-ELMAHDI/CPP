/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:02:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 16:52:48 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void    PhoneBook::setarr(Contact oo, int index)
{
    arr[index] = oo;
}

Contact PhoneBook::getarr(int index)
{
    return(arr[index]);
}

int   PhoneBook::checkWhiteSpace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isspace(str[i]))
            return(1);
    return(0);
}

int   PhoneBook::checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isdigit(str[i]))
            return(1);
    return(0);
}

int   PhoneBook::add(PhoneBook *phone, Contact *ctt)
{
    std::string str;
    static int i;

    std::cout << "Enter a first name: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str))
        ctt->setFirstName(str);
    else
        return(std::cout << "First name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a last name: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str))
        ctt->setlastName(str);
    else
        return (std::cout << "Last name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a nickname: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str))
        ctt->setnickname(str);
    else
        return (std::cout << "Nickname cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a phone number: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str) && !phone->checkDigit(str))
        ctt->setphoneNumber(str);
    else
        return (std::cout << "Phone number is empty or the input is not a number Please try again." << std::endl, 1);

    std::cout << "Enter a darkest secret: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str))
        ctt->setdarkestSecret(str);
    else
        return (std::cout << "Darkest secret cannot be empty. Please try again." << std::endl, 1);

    if(i == 8)
        i = 0;
    phone->setarr(*ctt, i);
    i++; 
    return (0);
}

void   PhoneBook::search(PhoneBook *phone)
{
    for (size_t i = 0; i < 8; i++)
    {
        std::cout 
        << "---------------------------------------------\n"
        << "|" << std::setw(10)  << i + 1 << "|"
        << std::setw(10) << phone->getarr(i).getFirstName() << "|"
        << std::setw(10) << phone->getarr(i).getlastName()  << "|"
        << std::setw(10) << phone->getarr(i).getnickname() << "|\n";
    }
    std::cout << "---------------------------------------------\n";
}