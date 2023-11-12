/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:54:00 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 17:14:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _fixedPoint(0){
}

Fixed::Fixed( const Fixed & src ){
	*this = src;
}

Fixed::Fixed(const int integerNumber)
{
	_fixedPoint = integerNumber << _bits;
}

Fixed::Fixed(const float floatNumber)
{
	_fixedPoint = roundf(floatNumber * (1 << _bits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed(){
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs ){
	if ( this != &rhs )
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i ){
	o << i.toFloat();
	return o;
}

bool Fixed::operator<(Fixed const &rhs) const{
	return(this->_fixedPoint < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs) const{
	return(this->_fixedPoint > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const{
	return(this->_fixedPoint >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const{
	return(this->_fixedPoint <= rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const{
	return(this->_fixedPoint != rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const{
	return(this->_fixedPoint == rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const{
	return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const{
	return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const{
	return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator--(void){
	_fixedPoint--;
	return(*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	--(*this);
	return(tmp);
}

Fixed &Fixed::operator++(void){
	_fixedPoint++;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return(tmp);
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

Fixed & Fixed::min(Fixed &a, Fixed &b){
	return(a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b){
	return(a > b ? a : b);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b){
	return(a < b ? a : b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b){
	return(a > b ? a : b);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const int Fixed::_bits = 8;

/* ************************************************************************** */
