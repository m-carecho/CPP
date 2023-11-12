/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:56:45 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 18:22:08 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 3);

    Point insidePoint(2, 1);
    if (bsp(a, b, c, insidePoint)) {
        std::cout << GREEN << "Test 1: Point " << insidePoint.getX().toFloat() << ", " << insidePoint.getY().toFloat() << " is inside the triangle." << RESET << std::endl;
    } else {
        std::cout << RED << "Test 1: Point " << insidePoint.getX().toFloat() << ", " << insidePoint.getY().toFloat() << " is outside the triangle." << RESET<< std::endl;
    }


    Point onEdgePoint(2, 0);
    if (bsp(a, b, c, onEdgePoint)) {
        std::cout << GREEN << "Test 2: Point " << onEdgePoint.getX().toFloat() << ", " << onEdgePoint.getY().toFloat() << " is inside the triangle." << RESET << std::endl;
    } else {
        std::cout << RED << "Test 2: Point " << onEdgePoint.getX().toFloat() << ", " << onEdgePoint.getY().toFloat() << " is outside the triangle." << RESET << std::endl;
    }


    Point outsidePoint(5, 2);
    if (bsp(a, b, c, outsidePoint)) {
        std::cout << GREEN << "Test 3: Point " << outsidePoint.getX().toFloat() << ", " << outsidePoint.getY().toFloat() << " is inside the triangle." << RESET << std::endl;
    } else {
        std::cout << RED << "Test 3: Point " << outsidePoint.getX().toFloat() << ", " << outsidePoint.getY().toFloat() << " is outside the triangle." << RESET << std::endl;
    }

    return 0;
}
