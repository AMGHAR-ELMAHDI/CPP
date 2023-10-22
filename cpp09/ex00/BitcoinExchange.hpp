/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:32:10 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/22 18:05:38 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <map>


class BitcoinExchange
{
    private:
        std::map<std::string, std::string> mapData;
        // std::map<std::string, std::string> mapInput;
        std::string     line;
        size_t			in;
        
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        
        //-------------------------------------------------------//
        
        int     parseInputFile(char *input);
        int     parseDataFile();
        int		CountPipes(std::string check);
        int		checkFirstLine(std::string check);
        int     checkLines(std::string check);
        int		CountDashes(std::string check);
        void    calculateValue(std::string date, double value);
};

#endif