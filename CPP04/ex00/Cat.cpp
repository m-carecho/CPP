/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:51:44 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/08 19:44:23 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "[Cat] copy assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "[Cat] 🔉 meow meow 🔉" << std::endl;
}


/* ************************************************************************** */
