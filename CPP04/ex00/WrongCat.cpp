/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:54:25 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/08 20:12:27 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat] 🔉 MEEOOOWWWWWW 🔉" << std::endl;
}


