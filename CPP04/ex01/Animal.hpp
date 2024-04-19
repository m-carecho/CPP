/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:18:34 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/21 17:48:05 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

class Animal
{
	protected:
	std::string		_type;

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
		Animal &		operator=( Animal const & rhs );
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

};

#endif /* ********************************************************** ANIMAL_H */
