/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:39:21 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/25 14:26:11 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", 1, 1), _target("default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {
	*this = src;
	return ;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}


RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this == &rhs)
		return (*this);
	_target = rhs._target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const {
	return (_target);
}


void		RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::cout << "* drilling noises *" << std::endl;
	if ((1 + (std::rand() % 2)) == 1)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomization failed." << std::endl;
}



/* ************************************************************************** */
