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

int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int isValidDate(double year, double month, double day)
{
    if (year < 0 || month < 1 || month > 12 || day < 1)
        return 1;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year))
        daysInMonth[1] = 29;

    if (day > daysInMonth[(int)month - 1])
        return 1;

    return 0;
}

std::string getNextToken(std::istringstream& iss)
{
    std::string token;

    std::getline(iss, token, '-');
    return token;
}

void BitcoinExchange::calculateValue(std::string date, double value)
{
	std::map<std::string, std::string>::iterator it;
	double output;

	if((it = this->mapData.find(date.substr(0, date.length() - 1))) != this->mapData.end())
	{
		output = value * std::stod(it->second);
		std::cout << "Found and Value is:" << output << std::endl;
	}
	else
	{
		std::string print = date.substr(0, date.length() - 1);

		it = this->mapData.lower_bound(print);


		std::cout << "date|" << print << "|" << "comparison|" << it->first << "|" << std::endl;

		output = value * std::stod(it->second);

		std::cout << "Not Found and Value is:" << output << std::endl;
	}

}

int	BitcoinExchange::checkLines(std::string check)
{
	std::string date,value,year,month, day;

	date = check.substr(0, this->in);
	value = &check[this->in + 1];

	if(date.length() != 11 || this->CountDashes(date) == 1 || value.length() > 4)
		return(1);

    std::istringstream iss(date);
    std::string token;

	year =  getNextToken(iss);
	month =  getNextToken(iss);
	day =  getNextToken(iss);

	
	double	yearNum = std::stod(year);
	double	monthNum = std::stod(month);
	double	dayNum = std::stod(day);
	double	valueNum = std::stod(value);

	std::cout << "year|" << yearNum << "|" << "month|" << monthNum << "|" << "day|" << dayNum << "|"<< std::endl;
	if(yearNum >= 2009 && monthNum >= 1 && dayNum >= 2)
	{
		if(isValidDate(yearNum, monthNum, dayNum) == 1)
			return(1);
	}
	else
		return(1);

	std::cout << "VALLALA:"<< valueNum << std::endl;
	if(valueNum < 0 || valueNum > 1000)
		return(1);

	this->calculateValue(date, valueNum);
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
		if(this->CountPipes(line) == 0)
		{
			this->in = line.find('|');
			this->mapInput[line.substr(0, this->in)] = &line[this->in + 1];
		}
	}
	
	for (std::map<std::string, std::string>::iterator it = this->mapInput.begin(); it != this->mapInput.end(); it++)
	{
		if(checkLines(line) == 1)
			return(inputFile.close(), 1);
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

	dataFile.close();
    return 0;
}
