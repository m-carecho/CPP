/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:01:18 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/25 15:16:37 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {

	std::cout << std::endl << CYAN << "------ Test 00 ------" << RESET;
	std::cout << std::endl << GRAY << "RobotomyCreationForm" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl << CYAN << "------ Test 01 ------" << RESET;
	std::cout << std::endl << GRAY << "PresidentialPardonForm" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* ppf;
        ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << *ppf << std::endl;
        delete ppf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl << CYAN << "------ Test 02 ------" << RESET;
	std::cout << std::endl << GRAY << "ShrubberyCreationForm" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* scf;
        scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << *scf << std::endl;
        delete scf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl << CYAN << "------ Test 03 ------" << RESET;
	std::cout << std::endl << GRAY << "AnyForm : Error" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* scf;
        scf = someRandomIntern.makeForm("any form", "Bender");
        std::cout << *scf << std::endl;
        delete scf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
