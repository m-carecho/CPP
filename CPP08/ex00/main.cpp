/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:51:49 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/13 16:00:08 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void vector_test()
{
	std::cout << YELLOW << " --------------- Vector test ---------------" << RESET << std::endl;

	std::vector<int>::iterator	it;
	std::vector<int> 			vec;

	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		std :: cout << GRAY << "Try to find the value 7 ..." << RESET << std::endl;
		it = easyfind(vec, 5) ;
		std::cout << std::endl;
		std :: cout << GRAY << "Try to find the value 15 ..." << RESET << std::endl;
		easyfind(vec, 15);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void list_test()
{
	std::cout << CYAN << " --------------- List test ---------------" << RESET << std::endl;

	std::list<int>::iterator	it;
	std::list<int> 			list;

	for (int i = 0; i < 10; i++)
		list.push_back(i);
	try
	{
		std :: cout << GRAY << "Try to find the value 7 ..." << RESET << std::endl;
		it = easyfind(list, 5) ;
		std::cout << std::endl;
		std :: cout << GRAY << "Try to find the value 15 ..." << RESET << std::endl;
		easyfind(list, 15);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	vector_test();
	list_test();
	return (0);
}
