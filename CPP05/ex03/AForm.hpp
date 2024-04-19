/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:53:40 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 19:09:28 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		static int const 	_maxGrade = 1;
		static int const 	_minGrade = 150;
	public:

	AForm(void);
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &source);
	virtual ~AForm(void);


	AForm	&operator=(const AForm &other);

	virtual void		execute(Bureaucrat const &executor) const = 0;
	std::string getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;
	void		beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class FormNotSignedException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */
