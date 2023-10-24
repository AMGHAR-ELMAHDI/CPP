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

void BitcoinExchange::calculateValue(std::string date, double value, std::string oldDate, bool overDate)
{
	std::string printDate = date.substr(0, date.length() - 1);
	std::map<std::string, std::string>::iterator it;
	double output;

	it = this->mapData.lower_bound(printDate);
	output = value * std::stod(it->second);
	if(overDate == true)
		std::cout << oldDate << " => " << value << " = " << output << std::endl;
	else
		std::cout << date << " => " << value << " = " << output << std::endl;
}

int   checkDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
	{
		if(i != 0 && str[i] == '.')
			continue;
		else
    	    if(!std::isdigit(str[i]))
	            return(1);
	}
    return(0);
}

int   checkWhiteSpace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(!std::isspace(str[i]))
            return(1);
    return(0);
}

int	BitcoinExchange::checkLines(std::string check)
{
	std::string date,value,year,month, day;

	int index = check.find('|');

	date = check.substr(0, index);
	value = &check[index + 1];

	if(value[0] == ' ')
	{
		if(checkDigit(&value[1]))
			return(std::cout << "Error: Wrong value" << std::endl, 1);
	}
	else
		return(std::cout << "Error: Wrong value" << std::endl, 1);

	std::string newValue = value;
    std::stringstream stream(newValue);
	float		outFloat;

	if(!(stream >> outFloat))
	 	return(std::cout << "Error: Overflow Error" << std::endl, 1);

	if(value.length() == 0 || value.empty() || checkWhiteSpace(value) == 0)
		return(std::cout << "Error: Empty value" << std::endl, 1);


	if(date.length() != 11 || this->CountDashes(date) == 1)
		return(std::cout << "Error: Wrong argument." << std::endl, 1);
	else if(value.length() > 5)
		return(std::cout << "Error: too large a number." << std::endl, 1);


    std::istringstream iss(date);

	year =  getNextToken(iss);
	month =  getNextToken(iss);
	day =  getNextToken(iss);


	if(checkDigit(year) || checkDigit(month) || checkDigit(day.substr(0, day.length() - 1)))
		return(std::cout << "Error: date only accepts numbers." << std::endl, 1);

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

	std::string oldDate = date.substr(0, date.length() - 1);
	bool	overDate = false;
	if(((yearNum == 2022 && ( (monthNum == 3 && dayNum > 29) || (monthNum > 3) ) ) ) || yearNum > 2022)
	{
		date = "2022-03-29 ";
		overDate = true;
	}
	this->calculateValue(date, valueNum, oldDate, overDate);
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
