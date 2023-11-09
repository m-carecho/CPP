/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:03:39 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 22:45:16 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main(void)
{
    Zombie *heapzombie = newZombie(std::string("Zé Heap"));

    std::cout << BOLD GREEN "          Testing using heap " RESET<< std::endl;
	std::cout << BOLD " 💃💃  RUN. " RESET << "the heap zombie is coming  💃💃" << std::endl;
    heapzombie->announce();
    delete heapzombie;


    std::cout << BOLD GREEN "          Testing using stack " RESET<< std::endl;
	std::cout << BOLD " 🏃🏃  RUN. " RESET << "the stack zombie is coming  🏃🏃" <<std::endl;
    randomChump(std::string("Maria Stack"));
}


