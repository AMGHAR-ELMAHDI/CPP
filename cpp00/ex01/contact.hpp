/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:03:24 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/11 23:44:12 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT
#define CONTACT
#include "phonebook.hpp"
#include <iostream>

class  Contact
{
    private:

    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string darkestSecret;
    std::string phoneNumber;

    public:

    void setFirstName(std::string str);
    std::string getFirstName(void);

    void setlastName(std::string str);
    std::string getlastName(void);

    void setnickname(std::string str);
    std::string getnickname(void);

    void setdarkestSecret(std::string str);
    std::string getdarkestSecret(void);
    
    void setphoneNumber(std::string str);
    std::string getphoneNumber(void);
};



#endif