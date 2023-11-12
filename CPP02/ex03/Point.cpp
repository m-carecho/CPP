/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:54:48 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 19:06:16 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point(): _x(0), _y(0) {}

Point::Point(float const &x, float const &y): _x(x), _y(y) {}

Point::Point(const Point & src ){
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point(){}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
	{
		const_cast<Fixed &>(this->_x) = rhs.getX();
		const_cast<Fixed &>(this->_y) = rhs.getY();
		return *this;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed	Point::getX() const {
	return this->_x;
}

Fixed	Point::getY() const {
	return this->_y;
}

/* ************************************************************************** */
