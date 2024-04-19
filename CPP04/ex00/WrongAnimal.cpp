/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:46:42 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/08 20:15:03 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = src;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal] 🔉 unknown animal sounds 🔉" << std::endl;
}



