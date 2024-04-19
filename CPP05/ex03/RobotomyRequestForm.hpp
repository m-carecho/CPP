/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:39:46 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 15:48:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm {
private:
	std::string	_target;
public:
	// Constructors and destructor
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &source);
	virtual ~RobotomyRequestForm(void);

	// Operator overloads
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &source);

	// Member functions
	std::string getTarget(void) const;
	void		execute(Bureaucrat const &executor) const;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
