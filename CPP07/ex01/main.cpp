/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:40:21 by mcarecho          #+#    #+#             */
/*   Updated: 2024/03/24 21:43:18 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int intArray[5] = {1, 2, 3, 4, 5};
	std::string strArray[5] = {"one", "two", "three", "four", "five"};

	std::cout << "Int array:" << std::endl;
	iter(intArray, 5, print);
	std::cout << "String array:" << std::endl;
	iter(strArray, 5, print);
	return 0;
}

