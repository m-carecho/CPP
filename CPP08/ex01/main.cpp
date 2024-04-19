/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:20:52 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 17:12:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test_subject()
{
	std::cout << CYAN << " --------------- subject test ---------------" << RESET << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl
			  << std::endl;
}

void test_exception(void)
{
	std::cout << CYAN << " --------------- Exception --------------- " << RESET << std::endl;
	std::cout << "Testing adding a number to an empty Span" << std::endl;
	Span sp = Span();
	try
	{
		sp.addNumber(6);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Testing calculating the shortest span in a Span with only one element" << std::endl;
	Span sp1 = Span(1);
	sp1.addNumber(2);
	try
	{
		sp1.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Testing calculating the longest span in a Span with only one element" << std::endl;
	try
	{
		sp1.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Testing adding a number to a full Span" << std::endl;
	Span sp2 = Span(2);
	sp2.addNumber(2);
	sp2.addNumber(3);
	try
	{
		sp2.addNumber(4);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return;
}

void test_big(void)
{
	std::cout << CYAN << "\nTesting with at least 100000 numbers:" << RESET << std::endl;
	Span span2(100000);
	span2.randomFill();
	std::cout << "Shortest span: " << span2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span2.longestSpan() << std::endl;

	std::cout << std::endl
			  << CYAN << "Testing with at least 10000 numbers:" << RESET << std::endl;
	Span span1(10000);
	span1.randomFill();
	std::cout << "Shortest span: " << span1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span1.longestSpan() << std::endl;
}

int main()
{
	test_subject();
	test_exception();
	test_big();
	return (0);
}
