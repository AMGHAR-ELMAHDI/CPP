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
    // std::cout << "BitcoinExchange Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
//    std::cout << "BitcoinExchange Copy constructor Called " << std::endl;
   *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    // std::cout << "BitcoinExchange Copy assignement opperator called " << std::endl; 
    if (this != &other)
    {
		this->mapData = other.mapData;
		// this->mapInput = other.mapInput;
		this->in = other.in;
		this->line = other.line;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "BitcoinExchange Destructor called" << std::endl;
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

std::string getNextToken(std::istringstream &iss)
{
    std::string token;

    std::getline(iss, token, '-');
    return token;
}

void BitcoinExchange::calculateValue(std::string date, double value)
{
	std::string printDate = date.substr(0, date.length() - 1);
	std::map<std::string, std::string>::iterator it;
	double output;

	it = this->mapData.lower_bound(printDate);
	output = value * std::stod(it->second);
	std::cout << date << " => " << value << " = " << output << std::endl;
}

int   checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isdigit(str[i]))
            return(1);
    return(0);
}

int	BitcoinExchange::checkLines(std::string check)
{
	std::string date,value,year,month, day;

	int index = check.find('|');

	date = check.substr(0, index);
	value = &check[index + 1];

	if(date.length() != 11 || this->CountDashes(date) == 1)
		return(std::cout << "Error: Wrong argument." << std::endl, 1);
	else if(value.length() > 4)
		return(std::cout << "Error: too large a number." << std::endl, 1);

	// value = &check[index + 2];
	// std::cout << "|"<<date.substr(0,date.length() - 1) << "|" << value.substr(0, value.length() - 1)<<"|" << std::endl;
	// if(checkDigit(date.substr(0,date.length() - 1)) || checkDigit(value.substr(0, value.length() - 1)))
	// 	return(2);

    std::istringstream iss(date);

	year =  getNextToken(iss);
	month =  getNextToken(iss);
	day =  getNextToken(iss);

	double	yearNum = std::stod(year);
	double	monthNum = std::stod(month);
	double	dayNum = std::stod(day);
	double	valueNum = std::stod(value);
	
	if(yearNum >= 2009)
	{
		if(yearNum == 2009 && monthNum == 1 && dayNum < 2)
			return(std::cout << "Error: Wrong date." << std::endl, 1);

		if(isValidDate(yearNum, monthNum, dayNum) == 1)
			return(std::cout << "Error: Wrong date." << std::endl, 1);
	}
	else
		return(std::cout << "Error: Wrong date." << std::endl, 1);

	if(valueNum < 0)
		return(std::cout << "Error: not a positive number." << std::endl, 1);
	else if(valueNum > 1000)
		return(std::cout << "Error: too large a number." << std::endl, 1);

	this->calculateValue(date, valueNum);
	return(0);
}

int     BitcoinExchange::parseInputFile(char *input)
{
	std::string	str = input;
	
    std::fstream inputFile(str);
    if (!inputFile.is_open())
        return (std::cout << "Error in input file." << std::endl, 1);

	std::getline(inputFile, str);
	if(inputFile.eof() || this->checkFirstLine(str) == 1)
		return(std::cout << "Error: wrong format of 'date | value'.", 1);

	while (std::getline(inputFile, str))
	{
		if(this->CountPipes(str) == 1)
			std::cout << "Error: Wrong number of pipes." << std::endl;
		else
			if(checkLines(str) == 2)
				return(1);
	}
	
	inputFile.close();
    return 0;
}

int     BitcoinExchange::parseDataFile()
{
    std::ifstream dataFile("data.csv");
    if (!dataFile.is_open())
        return(std::cout << "Error: can't open data file" << std::endl, 1);
	
	std::getline(dataFile, this->line);
	while (std::getline(dataFile, this->line))
	{
		this->in = this->line.find(',');
		this->mapData[this->line.substr(0, this->in)] = &this->line[this->in + 1];
	}

	dataFile.close();
    return 0;
}
