/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:53:35 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/22 19:07:33 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string WHITE = "\033[1;37m";
const std::string ORANGE = "\033[1;38;5;202m";
const std::string GRAY = "\033[1;30m";
const std::string CYAN = "\033[1;36m";

class AForm;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;
		static int const 	_maxGrade = 1;
		static int const 	_minGrade = 150;

	public:

		Bureaucrat(); // Default constructor
		Bureaucrat(std::string name, int grade); // Parametric constructor
		Bureaucrat( Bureaucrat const & src ); // Copy constructor
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string	getName() const;
		int			getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void		signForm(AForm &form);
		void		executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
