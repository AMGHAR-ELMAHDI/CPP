/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:48:34 by eamghar           #+#    #+#             */
/*   Updated: 2023/08/17 19:52:20 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << " Constructor called " << std::endl;
}

Harl::~Harl()
{
    std::cout << " Destructor called " << std::endl;
}

void Harl::complain(std::string level)
{
    size_t index = 0;

    while ((index = level.find("DEBUG")) != std::string::npos)
    {
        this->debug();
        break;
    }
    while ((index = level.find("INFO")) != std::string::npos)
    {
        this->info();
        break;
    }
    while ((index = level.find("WARNING")) != std::string::npos)
    {
        this->warning();
        break;
    }
    while ((index = level.find("ERROR")) != std::string::npos)
    {
        this->error();
        break;
    }
}

void Harl::debug( void )
{
    std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error( void )
{
    std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}
