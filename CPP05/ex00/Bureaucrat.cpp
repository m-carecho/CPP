/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:53:25 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 19:14:54 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < _maxGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > _minGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName()), _grade(src.getGrade()){
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

std::string	Bureaucrat::getName(void) const {
	return (_name);
	}
int			Bureaucrat::getGrade(void) const {
	return (_grade);
	}

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < _maxGrade){
		throw Bureaucrat::GradeTooHighException();
	}else{
		_grade--;
	}
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > _minGrade){
		throw Bureaucrat::GradeTooLowException();
	}else{
		_grade++;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("\033[1;31mGrade too high!\033[0m");
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("\033[1;31mGrade too low!\033[0m");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this == &rhs)
		return (*this);
	_grade = rhs._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << YELLOW << bureaucrat.getName() << RESET << ", bureaucrat grade " << GREEN << bureaucrat.getGrade() << RESET << "." << std::endl;
	return (os);
}

/* ************************************************************************** */
