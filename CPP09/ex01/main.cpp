/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:45:25 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 23:45:35 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc == 1) {
		std::cout << "Error: Too few arguments!\n";
		return (1);
	} else if (argc > 2) {
		std::cout << "Error: Too many arguments!\n";
		return (1);
	} else {
		RPN	rpn;
		return (rpn.calculate(argv[1]));
	}
}
