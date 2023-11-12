/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:54:56 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 18:11:51 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{

	public:

		Point();
		Point( Point const & src );
		Point( float const &x, float const &y);
		~Point();

		Point &		operator=( Point const & rhs );
		Fixed	getX() const;
		Fixed	getY() const;

	private:
	Fixed const _x;
	Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* *********************************************************** POINT_H */
