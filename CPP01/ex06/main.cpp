/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:26:11 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/09 00:00:59 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[]) {
	Harl harl;

	if(argc != 2) {
		std::cerr << "error : invalid number of arguments" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
