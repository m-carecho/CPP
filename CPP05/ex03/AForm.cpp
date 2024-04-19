/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:53:45 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/19 20:23:49 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < _maxGrade || gradeToExecute < _maxGrade)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > _minGrade || gradeToExecute > _minGrade)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	*this = src;
	return ;
}

AForm::~AForm()
{
	return ;
}

std::string AForm::getName(void) const {
	return (_name);
}
bool		AForm::getSigned(void) const {
	return (_signed);
}
int			AForm::getGradeToSign(void) const {
	return (_gradeToSign);
}
int			AForm::getGradeToExecute(void) const {
	return (_gradeToExecute);
}

void		AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
	return ;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("\033[1;31mGrade too high!\033[0m");
}
const char *AForm::GradeTooLowException::what() const throw() {
	return ("\033[1;31mGrade too low!\033[0m");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("\033[1;31mForm not signed!\033[0m");
}

AForm &				AForm::operator=( AForm const & rhs )
{
	if (this == &rhs)
		return (*this);
	_signed = rhs._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const AForm &form) {
	os << "Form " << form.getName() << " is ";
	if (form.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute.";
	return (os);
}
