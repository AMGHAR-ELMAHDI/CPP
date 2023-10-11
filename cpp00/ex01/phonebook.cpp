/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:02:32 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/23 16:00:39 by eamghar          ###   ########.fr       */
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

void    getCorrectLenght(std::string *str)
{
    if(str->length() > 10)
    {
        *str = str->substr(0, 9);
        *str = *str + ".";
    }
}

int   PhoneBook::add(PhoneBook *phone, Contact *ctt)
{
    std::string str;
    static int i;

    std::cout << "Enter a first name: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return(std::cout << "\n" ,1);
    if (!str.empty() && phone->checkWhiteSpace(str))
    {
        ctt->setFirstNameFull(str);
        getCorrectLenght(&str);
        ctt->setFirstName(str);
    }
    else
        return(std::cout << "First name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a last name: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return(std::cout << "\n" ,1);
    if (!str.empty() && phone->checkWhiteSpace(str))
    {
        ctt->setlastNameFull(str);
        getCorrectLenght(&str);
        ctt->setlastName(str);
    }
    else
        return (std::cout << "Last name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a nickname: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return(std::cout << "\n" ,1);
    if (!str.empty() && phone->checkWhiteSpace(str))
    {
        ctt->setnicknameFull(str);
        getCorrectLenght(&str);   
        ctt->setnickname(str);
    }
    else
        return (std::cout << "Nickname cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a phone number: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return(std::cout << "\n" ,1);
    if (!str.empty() && phone->checkWhiteSpace(str) && !phone->checkDigit(str))
    {
        ctt->setphoneNumberFull(str);
        getCorrectLenght(&str);
        ctt->setphoneNumber(str);
    }
    else
        return (std::cout << "Phone number is empty or the input is not a number Please try again." << std::endl, 1);

    std::cout << "Enter a darkest secret: ";
    std::getline(std::cin, str);
    if(std::cin.eof())
        return(std::cout << "\n" ,1);
    if (!str.empty() && phone->checkWhiteSpace(str))
    {
        ctt->setdarkestSecretFull(str);
        getCorrectLenght(&str);
        ctt->setdarkestSecret(str);
    }
    else
        return (std::cout << "Darkest secret cannot be empty. Please try again." << std::endl, 1);

    if(i == 8)
        i = 0;
    phone->setarr(*ctt, i);
    i++; 
    return (0);
}

int   PhoneBook::search(PhoneBook *phone)
{
    std::string str;
    int         index;

    std::cout 
    << "---------------------------------------------\n"
    << "|" << std::setw(10) << "index"
    << "|" << std::setw(10) << "first name"
    << "|" << std::setw(10) << "last name"
    << "|" << std::setw(10) << "nickname" << "|\n" 
    << "---------------------------------------------\n";
    
    for (size_t i = 0; i < 8; i++)
    {
        if((phone->getarr(i).getFirstName()).length() > 0)
        {
            std::cout << "|" << std::setw(10)  << i + 1 << "|"
            << std::setw(10) << phone->getarr(i).getFirstName() << "|"
            << std::setw(10) << phone->getarr(i).getlastName()  << "|"
            << std::setw(10) << phone->getarr(i).getnickname() << "|\n";
            std::cout << "---------------------------------------------\n";
        }
    }
    
    std::cout << "Enter the index of wanted entry: ";
    std::getline(std::cin, str);
    if (!str.empty() && phone->checkWhiteSpace(str) && !phone->checkDigit(str))
    {
       index = std::atoi(str.c_str());
       if(index >= 1 && index <= 8)
       {
            index--;
            std::cout << "first name:\t" <<phone->getarr(index).getFirstNameFull() << "\n" 
            << "Last name:\t" << phone->getarr(index).getlastNameFull() << "\n" 
            << "Nickname:\t" << phone->getarr(index).getnicknameFull() << "\n"
            << "Phone number:\t" << phone->getarr(index).getphoneNumberFull() << "\n" 
            << "Darkest secret:\t" << phone->getarr(index).getdarkestSecretFull() << "\n";
       }
       else
        return (std::cout << "Index range should be between 1 and 8, Please try again." << std::endl, 1);
    }
    else
        return (std::cout << "Index is empty or its not a number Please try again." << std::endl, 1);
    return(0);
}
