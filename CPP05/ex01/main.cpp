/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:01:18 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 18:39:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

	std::cout << std::endl << CYAN << "------ Test 00 ------" << RESET;
	std::cout << std::endl << GRAY << "a Bureaucrat object with a valid grade and its printed \nattributes using the insertion operator overload." << RESET << std::endl;

	std::cout << std::endl << GREEN << "Creating a bureaucrat with grade 1" << RESET << std::endl;
	Bureaucrat b0("José", 1);
	std::cout << b0;

	std::cout << std::endl << GREEN << "Creating a bureaucrat with grade 150" << RESET << std::endl;
	Bureaucrat b150("Josélindo", 150);
	std::cout << b150;

	std::cout << std::endl << CYAN << "------ Test 01 ------" << RESET;
	std::cout << std::endl << GRAY << "a Form object with a valid grade and its printed \nattributes using the insertion operator overload." << RESET << std::endl;

	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 1 and grade to execute 1 ------" << RESET << std::endl;
	Form f1("Form 1", 1, 1);
	std::cout << f1 << std::endl;
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 150 and grade to execute 150 ------" << RESET << std::endl;
	Form f2("Form 2", 150, 150);
	std::cout << f2 << std::endl;
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 1 and grade to execute 150 ------" << RESET << std::endl;
	Form f3("Form 3", 1, 150);
	std::cout << f3 << std::endl;
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 150 and grade to execute 1 ------" << RESET << std::endl;
	Form f4("Form 4", 150, 1);
	std::cout << f4 << std::endl;

	std::cout << std::endl << CYAN << "------ Test 02 ------" << RESET;
	std::cout << std::endl << GRAY << "create a Form object with a grade that is out of bounds." << RESET << std::endl;


	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 0 and grade to execute 1 ------" << RESET << std::endl;
	try {
		Form f5("Form 5", 0, 1);
		std::cout << f5 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 1 and grade to execute 0 ------" << RESET << std::endl;
	try {
		Form f6("Form 6", 1, 0);
		std::cout << f6 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 151 and grade to execute 1 ------" << RESET << std::endl;
	try {
		Form f7("Form 7", 151, 1);
		std::cout << f7 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ Creating a Form with grade to sign 1 and grade to execute 151 ------" << RESET << std::endl;
	try {
		Form f8("Form 8", 1, 151);
		std::cout << f8 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << CYAN << "------ Test 02 ------" << RESET;
	std::cout << std::endl << GRAY << "Trying to sign valid forms" << RESET << std::endl;
	std::cout << std::endl << YELLOW << "------ Signing a form with a bureaucrat with grade 1 ------" << RESET << std::endl;
	b0.signForm(f1);
	std::cout << std::endl << YELLOW << "------ Signing a form with a bureaucrat with grade 150 ------" << RESET << std::endl;
	b150.signForm(f2);
	std::cout << std::endl << YELLOW << "------ Signing a form with a bureaucrat with grade 1 ------" << RESET << std::endl;
	b0.signForm(f3);
	std::cout << std::endl << YELLOW << "------ Signing a form with a bureaucrat with grade 150 ------" << RESET << std::endl;
	b150.signForm(f4);

	std::cout << std::endl << CYAN << "------ Test 03 ------" << RESET;
	std::cout << std::endl << GRAY << "Trying to sign forms with an different grade between the bureaucrat and the Form" << RESET << std::endl;

	std::cout << std::endl << YELLOW << "------ Trying to sign a form with a bureaucrat with grade 150 ------" << RESET << std::endl;
	b150.signForm(f1);

	std::cout << std::endl << YELLOW << "------ Trying to sign a form with a bureaucrat with grade 1 ------" << RESET << std::endl;
	b0.signForm(f2);
	return (0);
}

