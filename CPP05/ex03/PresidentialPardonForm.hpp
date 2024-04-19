/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:39:13 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 19:06:26 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFOR_HPP
# define PRESIDENTIALPARDONFOR_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
	std::string	_target;

	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &source);
	virtual ~PresidentialPardonForm();

	std::string getTarget(void) const;
	void		execute(Bureaucrat const &executor) const;

	PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );


};

#endif /* ******************************************* PRESIDENTIALPARDONFOR_H */
