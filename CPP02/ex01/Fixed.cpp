/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:54:00 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 14:14:15 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src ){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int integerNumber)
{

}

Fixed::Fixed(const float floatNumber)
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed(){
	std::cout << "Default constructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs ){
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

	int Fixed::getRawBits(void) const{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_fixedPoint);
	}

	void Fixed::setRawBits(int const raw){
		this->_fixedPoint = raw;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const int Fixed::_bits = 8;

/* ************************************************************************** */
