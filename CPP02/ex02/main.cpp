/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:56:45 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 17:18:32 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	std::cout << YELLOW << "The subject test" << RESET<< std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << YELLOW << "More tests" << RESET << std::endl << std::endl;

	std::cout << GREEN << "The 6 comparison operators: >, <, >=, <=, == and !=" << RESET<< std::endl;
	Fixed MyA(5);
    Fixed MyB(3);
	std::cout << ORANGE << "a: " << (MyA) << " b: " << (MyB) << std::endl;
    std::cout << "1 = TRUE 0 = FALSE" << RESET<< std::endl;

    std::cout << "a < b: " << (MyA < MyB) << std::endl;
    std::cout << "a > b: " << (MyA > MyB) << std::endl;
    std::cout << "a >= b: " << (MyA >= MyB) << std::endl;
    std::cout << "a <= b: " << (MyA <= MyB) << std::endl;
    std::cout << "a != b: " << (MyA != MyB) << std::endl;
    std::cout << "a == b: " << (MyA == MyB) << std::endl << std::endl;


	std::cout << GREEN << "The 4 arithmetic operators: +, -, *, and /" << RESET<< std::endl;
    std::cout << ORANGE << "a: " << (MyA) << " b: " << (MyB) << RESET << std::endl;
	Fixed c = MyA + MyB;
    Fixed d = MyA - MyB;
    Fixed e = MyA * MyB;
    Fixed f = MyA / MyB;

    std::cout << "a + b: " << c.toFloat() << std::endl;
    std::cout << "a - b: " << d.toFloat() << std::endl;
    std::cout << "a * b: " << e.toFloat() << std::endl;
    std::cout << "a / b: " << f.toFloat() << std::endl;

	std::cout << GREEN << "The 2 increment (++) and decrement (--) operators" << RESET<< std::endl;

	Fixed g = MyA;
    Fixed h = MyB;

    std::cout << "g antes do incremento: "  << g << std::endl;
    ++g;
    std::cout << "g depois do incremento: " << g << std::endl;

    std::cout << "h antes do decremento: "  << h << std::endl;
    h--;
    std::cout << "h depois do decremento: " << h<< std::endl;

	std::cout << GREEN << "testing minimum value and maximum value" << RESET<< std::endl;

	Fixed x(2.5f);
    Fixed y(4.8f);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    Fixed &minValueRef = Fixed::min(x, y);
    Fixed &maxValueRef = Fixed::max(x, y);

    std::cout << "minValue: " << minValueRef.toFloat() << std::endl;
    std::cout << "maxValue: " << maxValueRef.toFloat() << std::endl;

    return 0;

}
