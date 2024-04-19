/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:01:18 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/19 19:51:07 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int	main(void) {
	std::cout << std::endl << CYAN << "------ Test 00 ------" << RESET;
	std::cout << std::endl << GRAY << "a Bureaucrat object with a valid grade and its printed \nattributes using the insertion operator overload." << RESET << std::endl;


	std::cout << std::endl << GREEN << "Creating a bureaucrat with grade 1" << RESET << std::endl;
		try {
		Bureaucrat b0("José", 1);
		std::cout << b0;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << GREEN << "Creating a bureaucrat with grade 150" << RESET << std::endl;
		try {
		Bureaucrat b150("Josélindo", 150);
		std::cout << b150;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << CYAN << "------ Test 01 ------" << RESET;
	std::cout << std::endl << GRAY << "create a Bureaucrat object with an invalid note" << RESET << std::endl;

	std::cout << std::endl << YELLOW << "------ Creating a bureaucrat with negative grade ------" << RESET << std::endl;
	try {
		Bureaucrat bn("Angelo", -4);
		std::cout << bn;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ Creating a bureaucrat with grade 0 ------" << RESET << std::endl;
	try {
		Bureaucrat b1("Jorge", 0);
		std::cout << b1;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ Creating a bureaucrat with grade 151 ------" << RESET << std::endl;
	try {
		Bureaucrat b2("Joao", 151);
		std::cout << b2;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << CYAN << "------ Test 01 ------" << RESET;
	std::cout << std::endl << GRAY << "Create a Bureaucrat object and test the increment and decrement" << RESET << std::endl;

	std::cout << std::endl << YELLOW << "------ Creating a bureaucrat with grade 1 ------" << RESET << std::endl;
	try {
		Bureaucrat b3("Antonio", 1);
		std::cout << b3;
		std::cout << "Decrementing grade 10x ..." << std::endl;
		for (int i = 0; i < 10; i++)
			b3.decrementGrade();
		std::cout << b3;
		std::cout << "Incrementing grade 10x ..." << std::endl;
		for (int i = 0; i < 10; i++)
			b3.incrementGrade();
		std::cout << b3;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << CYAN << "------ Test 02 ------" << RESET;
	std::cout << std::endl << GRAY << "Create a Bureaucrat object and test the increment until there is an exception" << RESET << std::endl;

	std::cout << std::endl << YELLOW << "------ Creating a bureaucrat with grade 10 ------" << RESET << std::endl;
	try {
		Bureaucrat b3("Lucas", 10);
		std::cout << b3;
		std::cout << "Incrementing grade 20x ..." << std::endl;
		for (int i = 0; i < 20; i++){
			b3.incrementGrade();
			std::cout << b3;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);

}
