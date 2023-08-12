/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 02:47:37 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int     get_empty_contact(PhoneBook phone)
{
    std::string str;
    size_t i;

    for (i = 0; i < 9; i++)
    {
        str = phone.getarr(i).getFirstName();
        std::cout << "|" << str << "|" << "\n";
        if(!str.empty())
            break;
    }
    if(i == 8)
        return(0);
    return(i);
}

int    add(PhoneBook phone, Contact ctt)
{
    std::string str;
    static int i;

    std::cout << "Enter a first name: ";
    std::getline(std::cin, str);
    if (!str.empty())
        ctt.setFirstName(str);
    else
        return(std::cout << "First name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a last name: ";
    std::getline(std::cin, str);
    if (!str.empty())
        ctt.setlastName(str);
    else
        return (std::cout << "Last name cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a nickname: ";
    std::getline(std::cin, str);
    if (!str.empty())
        ctt.setnickname(str);
    else
        return (std::cout << "Nickname cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a phone number: ";
    std::getline(std::cin, str);
    if (!str.empty())
        ctt.setphoneNumber(str);
    else
        return (std::cout << "Phone number cannot be empty. Please try again." << std::endl, 1);

    std::cout << "Enter a darkest secret: ";
    std::getline(std::cin, str);
    if (!str.empty())
        ctt.setdarkestSecret(str);
    else
        return (std::cout << "Darkest secret cannot be empty. Please try again." << std::endl, 1);

    std::cout << "i === "<< i << "\n";
    phone.setarr(ctt, i);
    // std::cout << phone.getarr(i).getFirstName() << "\t" 
    // << phone.getarr(i).getlastName() << "\t" 
    // << phone.getarr(i).getphoneNumber() << "\t" 
    // << phone.getarr(i).getdarkestSecret() << "\t" 
    // << phone.getarr(i).getnickname() << "\n" ;
    i++; 
    return (0);
}



int main()
{
    PhoneBook phone;
    Contact ctt;
    std::string inputLine;

    std::cout << "The program only accepts ADD, SEARCH, and EXIT\n";
    std::cout << "Enter a line of text: ";
    
    while (std::getline(std::cin, inputLine))
    {
        if (inputLine == "ADD")
        {
            if (add(phone, ctt))
            {
                std::cout << "Please enter a line of text: ";
                continue;
            }
            std::cout << phone.getarr(0).getFirstName() << "\t" 
            << phone.getarr(0).getlastName() << "\t" 
            << phone.getarr(0).getphoneNumber() << "\t" 
            << phone.getarr(0).getdarkestSecret() << "\t" 
            << phone.getarr(0).getnickname() << "\n" ;
        }
        else if (inputLine == "SEARCH")
        {
            
        }
        else if (inputLine == "EXIT")
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
        std::cout << "Please enter a line of text: ";
    }
    for (size_t i = 0; i < 8; i++)
    {
        std::cout << phone.getarr(i).getFirstName() << "\t" 
        << phone.getarr(i).getlastName() << "\t" 
        << phone.getarr(i).getphoneNumber() << "\t" 
        << phone.getarr(i).getdarkestSecret() << "\t" 
        << phone.getarr(i).getnickname() << "\n" ;
        puts("-----------------------------");
    }
    return 0;
}

void    ADD()
{
    // ctt.setlastName("27");
    // ctt.setphoneNumber("06060606");
    // ctt.setdarkestSecret("tadla");
    // ctt.setnickname("lbara2a");
    
    // phone.setarr(ctt,0);
    
    // std::cout << phone.getarr(0).getFirstName() << "\t" 
    // << phone.getarr(0).getlastName() << "\t" 
    // << phone.getarr(0).getphoneNumber() << "\t" 
    // << phone.getarr(0).getdarkestSecret() << "\t" 
    // << phone.getarr(0).getnickname() << "\n" ;   
}