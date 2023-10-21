/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:35:15 by eamghar           #+#    #+#             */
/*   Updated: 2023/09/25 13:46:52 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
   std::cout << "BitcoinExchange Copy constructor Called " << std::endl;
   *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << "BitcoinExchange Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
		this->mapData = other.mapData;
		this->mapInput = other.mapInput;
		this->in = other.in;
		this->line = other.line;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange Destructor called" << std::endl;
}

int		BitcoinExchange::CountPipes(std::string check)
{
	int		pipeNum = 0;

	for (size_t i = 0; i < check.length(); i++)
		if(check[i] == '|')
			pipeNum++;
	if(pipeNum != 1)
		return(1);
	return(0);
}

int		BitcoinExchange::CountDashes(std::string check)
{
	int		dashNum = 0;

	for (size_t i = 0; i < check.length(); i++)
		if(check[i] == '-')
			dashNum++;
	if(dashNum != 2)
		return(1);
	return(0);
}

int		BitcoinExchange::checkFirstLine(std::string check)
{
	if(check.length() == 12)
	{
		if(this->CountPipes(check) == 1)
			return(1);

		int index = check.find('|');

		std::string date = check.substr(0, index - 1);
		std::string value = &check[index + 2];

		if(date == "date" && value == "value")
			return(0);
		else
			return(1);
	}
	else
		return(1);
	return(0);
}

std::string getNextToken(std::istringstream& iss)
{
    std::string token;

    std::getline(iss, token, '-');
    return token;
}

int	BitcoinExchange::checkLines(std::string check)
{
	std::string date,value,year,month, day;

	date = check.substr(0, this->in);
	value = &check[this->in + 1];

	if(date.length() != 11 || this->CountDashes(date) == 1)
		return(1);

    std::istringstream iss(date);
    std::string token;

	year =  getNextToken(iss);
	month =  getNextToken(iss);
	day =  getNextToken(iss);

	
	double	yearNum = std::stod(year);
	double	monthNum = std::stod(month);
	double	dayNum = std::stod(day);

	std::cout << "year|" << yearNum << "|" << "month|" << monthNum << "|" << "day|" << dayNum << "|"<< std::endl;
	if(yearNum >= 2009 && monthNum >= 1 && dayNum >= 2)
	{
		if(monthNum >= 1 && monthNum <= 12)
		{
			if(dayNum >= 1 && dayNum <= 31)
			{
				if(monthNum)
			}
		}
		else
			return(1);

	}
	else
		return(1);
	return(0);
}

int     BitcoinExchange::parseInputFile(char *input)
{
	this->line = input;
    std::fstream inputFile(this->line);
    if (!inputFile.is_open())
        return (std::cout << "Error in input file" << std::endl, 1);
	this->line.clear();

	std::getline(inputFile, line);
	if(inputFile.eof() || this->checkFirstLine(line) == 1)
		return(1);
	while (std::getline(inputFile, line))
	{
		if(this->CountPipes(line) == 1)
			return(inputFile.close(), 1);

		this->in = line.find('|');
		if(checkLines(line) == 1)
			return(inputFile.close(), 1);

		this->mapInput[line.substr(0, this->in)] = &line[this->in + 1];
		// std::cout << "1|" << line.substr(0, this->in) << "|" << std::endl;
		// std::cout << "2|" << &line[this->in + 1] << "|" << std::endl;
	}
	inputFile.close();
    return 0;
}

int     BitcoinExchange::parseDataFile()
{
	this->line.clear();

    std::ifstream dataFile("data.csv");
    if (!dataFile.is_open())
        return(std::cout << "Error in data file" << std::endl, 1);
	
	std::getline(dataFile, this->line);
	while (std::getline(dataFile, this->line))
	{
		this->in = this->line.find(',');
		this->mapData[this->line.substr(0, this->in)] = &this->line[this->in + 1];
	}

	// std::map<std::string, std::string>::iterator it = this->mapData.begin();
	// while (it != this->mapData.end())
	// {
	// 	std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
	// 	++it;
	// }
	dataFile.close();
    return 0;
}
