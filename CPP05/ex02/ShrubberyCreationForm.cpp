/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:39:52 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 19:10:54 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 1, 1), _target("default"){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source) : AForm(source), _target(source._target) {
	*this = source;
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this == &rhs)
		return (*this);
	_target = rhs._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const {
	return (_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	std::string filename = _target + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
		throw ShrubberyCreationForm::FileNotOpenException();
	file << "   /\\ " << std::endl;
	file << "  /  \\ " << std::endl;
	file << " /    \\ " << std::endl;
	file << "/______\\ " << std::endl;
	file << "   ||| " << std::endl;
	file.close();
}

// Exception classes
const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
	return ("Error: could not open file.");
}


/* ************************************************************************** */
