/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:54:00 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 15:00:05 by mcarecho         ###   ########.fr       */
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
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = integerNumber << _bits;
}

Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(floatNumber * (1 << _bits));
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

std::ostream &			operator<<( std::ostream & o, Fixed const & i ){
	o << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

	int Fixed::getRawBits(void) const{
		return (this->_fixedPoint);
	}

	void Fixed::setRawBits(int const raw){
		this->_fixedPoint = raw;
	}

	float Fixed::toFloat(void) const{
		return((float)_fixedPoint / (float)(1 << _bits));
	}

	int Fixed::toInt(void) const{
		return (_fixedPoint >> _bits);
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const int Fixed::_bits = 8;

/* ************************************************************************** */
