/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:52:19 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/23 11:08:32 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int N = 5;

	std::string name = "Zombie";
	Zombie* horde = zombieHorde(N, name);

	for(int i = 0; i < N; ++i)
		horde[i].announce();
	delete [] horde;
}
