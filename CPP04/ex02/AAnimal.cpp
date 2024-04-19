/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:18:30 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/07 16:28:56 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] Destructor called" << std::endl;
}

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "[AAnimal] copy assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}

