/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:53:53 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 14:50:37 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int integerNumber);
	Fixed(const float floatNumber);
	~Fixed();

	Fixed &operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixedPoint;
	static const int _bits;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */
