/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:52:11 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 23:20:59 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}
