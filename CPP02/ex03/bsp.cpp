/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:24:27 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/12 18:12:32 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	// Calcula o determinante da matriz do triângulo
    Fixed detT = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());

    // Calcula as coordenadas baricêntricas (u, v, w) do ponto em relação aos vértices do triângulo
    Fixed u = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / detT;
    Fixed v = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / detT;
    Fixed w = Fixed(1) - u - v;

    // Verifica se as coordenadas baricêntricas estão dentro do intervalo [0, 1]
    return u >= Fixed(0) && v >= Fixed(0) && w >= Fixed(0) && u <= Fixed(1) && v <= Fixed(1) && w <= Fixed(1);
}
