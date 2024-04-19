/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:40:19 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 16:15:26 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &source);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		std::string getTarget(void) const;
		void		execute(Bureaucrat const &executor) const;
		// Exception classes
		class FileNotOpenException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
