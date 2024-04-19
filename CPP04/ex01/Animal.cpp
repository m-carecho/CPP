/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:18:30 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/07 16:28:56 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "[Animal] copy assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "🔉 unknown animal sounds 🔉" << std::endl;
}
