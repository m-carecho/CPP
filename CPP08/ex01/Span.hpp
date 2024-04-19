/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:38 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/13 21:51:04 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string WHITE = "\033[1;37m";
const std::string ORANGE = "\033[1;38;5;202m";
const std::string GRAY = "\033[1;30m";
const std::string CYAN = "\033[1;36m";

class Span
{
private:
	unsigned int _size;
	std::vector<int> _vec;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &other);
	~Span();
	Span &operator=(const Span &other);
	void addNumber(int n);
	void randomFill();
	int shortestSpan();
	int longestSpan();

	class SpanException: public std::exception
	{
		private:
			const char* _msg;
		public:
			SpanException(const char* msg);
			virtual const char* what() const throw();
	};
};

#endif
