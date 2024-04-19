/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:40:17 by mcarecho          #+#    #+#             */
/*   Updated: 2024/03/24 21:42:21 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *array, int size, void (*func)(T const &))
{
	for (int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void print(T const &a)
{
	std::cout << a << std::endl;
}


#endif
