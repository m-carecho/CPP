/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:34:34 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 23:41:01 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc == 1) {
		std::cout << "Error: Too few arguments!\n";
		return (1);
	} else if (argc > 2) {
		std::cout << "Error: Too many arguments!\n";
		return (1);
	} else {
		BitcoinExchange	b;
		return (b.displayValues(argv[1]));
	}
}
