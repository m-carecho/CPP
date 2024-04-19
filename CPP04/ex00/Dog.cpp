/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:30:21 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/08 19:45:03 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog & src )
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = src;

}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

Dog &Dog::operator=( Dog const & rhs )
{
	std::cout << "[Dog] copy assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "[Dog] 🔉 AU AU 🔉" << std::endl;
}
