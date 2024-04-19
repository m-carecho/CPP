/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:53:40 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 20:02:13 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;


class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		~Form();

		Form &		operator=( Form const & rhs );
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

		void		beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
	};

	private:
		const std::string _name;
		bool				_signed;
		int const			_grade_to_sign;
		int const			_grade_to_execute;
		static int const 	_maxGrade = 1;
		static int const 	_minGrade = 150;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
