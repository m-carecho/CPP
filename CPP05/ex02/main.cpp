/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:01:18 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/25 14:53:05 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

static void	test_schrubbery(void);
static void	test_robotomy(void);
static void	test_presidential(void);

int main(void) {
	std::cout << std::endl << CYAN << "------ Test 00 ------" << RESET;
	std::cout << std::endl << GRAY << "ShrubberyCreationForm" << RESET << std::endl;
	test_schrubbery();
	std::cout << std::endl << CYAN << "------ Test 01 ------" << RESET;
	std::cout << std::endl << GRAY << "RobotomyCreationForm" << RESET << std::endl;
	test_robotomy();
	std::cout << std::endl << CYAN << "------ Test 02 ------" << RESET;
	std::cout << std::endl << GRAY << "PresidentialPardonForm" << RESET << std::endl;
	test_presidential();
	return (0);
}

static void	test_schrubbery(void) {
	std::cout << std::endl << YELLOW << "------ #1 ------" << RESET << std::endl;
	try {
		ShrubberyCreationForm form("MiMi");
		Bureaucrat bureaucrat("Joao", 1);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #2 ------" << RESET << std::endl;
		try {
		ShrubberyCreationForm form("Jorge");
		Bureaucrat bureaucrat("Joselindo", 140);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #3 ------" << RESET << std::endl;
	try {
		ShrubberyCreationForm form("Joice");
		Bureaucrat bureaucrat("Bento", 150);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

static void	test_robotomy(void) {
	std::cout << std::endl << YELLOW << "------ #1 ------" << RESET << std::endl;
	try {
		RobotomyRequestForm form("MiMi");
		Bureaucrat bureaucrat("Joao", 1);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #2 ------" << RESET << std::endl;
		try {
		RobotomyRequestForm form("Antonio");
		Bureaucrat bureaucrat("Joselindo", 60);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #3 ------" << RESET << std::endl;
	try {
		RobotomyRequestForm form("Joice");
		Bureaucrat bureaucrat("Bento", 150);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #4 ------" << RESET << std::endl;
	try {
		RobotomyRequestForm form("MiMi");
		Bureaucrat bureaucrat("Joao", 1);
		std::cout << "Form: " << form << std::endl;
		std::cout << "Bureaucrat: " << bureaucrat << std::endl;
		bureaucrat.signForm(form);

		int totalExecutions = 10;

		srand(time(NULL));
		for (int i = 0; i < totalExecutions; ++i) {
			try {
				bureaucrat.executeForm(form);
			} catch (std::exception &e) {
				std::cout << "Execution failed: " << e.what() << std::endl;
			}
		}
	}
	catch (std::exception &e) {
 		std::cout << e.what() << std::endl;
 	}
}

static void	test_presidential(void) {
	std::cout << std::endl << YELLOW << "------ #1 ------" << RESET << std::endl;
	try {
		PresidentialPardonForm form("MiMi");
		Bureaucrat bureaucrat("Joao", 1);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #2 ------" << RESET << std::endl;
		try {
		PresidentialPardonForm form("Antonio");
		Bureaucrat bureaucrat("Joselindo", 15);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << YELLOW << "------ #3 ------" << RESET << std::endl;
	try {
		PresidentialPardonForm form("Joice");
		Bureaucrat bureaucrat("Bento", 150);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
