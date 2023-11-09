/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:48:07 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 23:01:47 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl harl;
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("unknown");
	return 0;
}
