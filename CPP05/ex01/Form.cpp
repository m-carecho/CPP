/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:53:45 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 20:02:02 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form()  : _name("default"), _grade_to_sign(150), _grade_to_execute(150) {
	return ;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
	if (grade_to_sign < _maxGrade || grade_to_execute < _maxGrade)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > _minGrade || grade_to_execute > _minGrade)
		throw Form::GradeTooLowException();
	else
		_signed = false;
	return ;
}

Form::Form( const Form & src ): _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute) {
	*this = src;
}

Form::~Form()
{
	return ;
}

std::string	Form::getName(void) const {
	return (_name);
}
bool		Form::getSigned(void) const {
	return (_signed);
}
int			Form::getGradeToSign(void) const {
	return (_grade_to_sign);
}
int			Form::getGradeToExecute(void) const {
	return (_grade_to_execute);
}

void		Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
	return ;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("\033[1;31mGrade too high!\033[0m");
}
const char *Form::GradeTooLowException::what() const throw() {
	return ("\033[1;31mGrade too low!\033[0m");
}

Form &				Form::operator=( Form const & rhs )
{
	if (this == &rhs)
		return (*this);
	_signed = rhs._signed;
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << BLUE << i.getName() << RESET << ", form grade to sign " << YELLOW << i.getGradeToSign() << RESET << ", form grade to execute " << YELLOW << i.getGradeToExecute() << RESET << ".";
	return o;
}
