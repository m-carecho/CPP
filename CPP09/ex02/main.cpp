/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:52:02 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 23:52:09 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PmergeMe.hpp"

int main(int argc, char** argv) {
	int x = 0;

	if (argc == 1) {
		std::cout << "Error: Too few arguments!\n";
		return (1);
	} else {
		PmergeMe	pmm;
		x = pmm.sort(argv);
		return x;
	}
}
