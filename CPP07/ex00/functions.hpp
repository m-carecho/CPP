/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:30:21 by mcarecho          #+#    #+#             */
/*   Updated: 2024/03/24 21:36:05 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP

# define FUNCTIONS_HPP
# include <iostream>
# include <string>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}


#endif
