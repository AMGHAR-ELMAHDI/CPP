/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:23:54 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/12 16:31:21 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

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
            if (phone.add(&phone, &ctt))
            {
                std::cout << "Please enter a line of text: ";
                continue;
            }
        }
        else if (inputLine == "SEARCH")
        {
            phone.search(&phone);
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
    // for (size_t i = 0; i < 8; i++)
    // {
    //     std::cout << phone.getarr(i).getFirstName() << "\t" 
    //     << phone.getarr(i).getlastName() << "\t" 
    //     << phone.getarr(i).getphoneNumber() << "\t" 
    //     << phone.getarr(i).getdarkestSecret() << "\t" 
    //     << phone.getarr(i).getnickname() << "\n" ;
    //     puts("-----------------------------");
    // }
    return 0;
}
