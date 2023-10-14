/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamghar <eamghar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:22:50 by eamghar           #+#    #+#             */
/*   Updated: 2023/10/14 16:00:56 by eamghar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>



class Span
{
	private:
		std::vector<int> arr;
		unsigned int num;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &other);
        ~Span();

		//----------------------AddNumber---------------------------//
		void	addNumber(int n);

		//----------------------shortestSpan---------------------------//
		void	shortestSpan();
		
		//----------------------longestSpan---------------------------//
		int	longestSpan();
		
		//----------------------Exceptions---------------------------//
		class IndexIsOutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Index is out of bounds exception called");
				}
		};
};


template<typename T>

#endif





























// class SpanFinder {
// private:
//     std::vector<int> numbers;
// public:
//     void addNumber(int num) {
//         numbers.push_back(num);
//     }

//     int shortestSpan() {
//         if (numbers.size() < 2) {
//             throw std::runtime_error("Cannot find span. Insufficient numbers.");
//         }

//         std::sort(numbers.begin(), numbers.end());

//         int shortest = numbers[1] - numbers[0];
//         for (size_t i = 2; i < numbers.size(); i++) {
//             int span = numbers[i] - numbers[i - 1];
//             shortest = std::min(shortest, span);
//         }

//         return shortest;
//     }

//     int longestSpan() {
//         if (numbers.size() < 2) {
//             throw std::runtime_error("Cannot find span. Insufficient numbers.");
//         }

//         std::sort(numbers.begin(), numbers.end());

//         int longest = numbers[numbers.size() - 1] - numbers[0];
//         return longest;
//     }
// };

// int main() {
//     SpanFinder spanFinder;
//     spanFinder.addNumber(10);
//     spanFinder.addNumber(5);
//     spanFinder.addNumber(7);
//     spanFinder.addNumber(3);
//     spanFinder.addNumber(9);

//     try {
//         int shortest = spanFinder.shortestSpan();
//         int longest = spanFinder.longestSpan();
//         std::cout << "Shortest span: " << shortest << std::endl;
//         std::cout << "Longest span: " << longest << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }