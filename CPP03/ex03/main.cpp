/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:06:58 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:46:21 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void) {
	std::cout << GREEN << std::endl << "----- Constructor calls -----" << RESET << std::endl;
	DiamondTrap diamond("Diamond");

	std::cout << GREEN << std::endl << "----- Get attributes -----" << RESET << std::endl;
	std::cout << "Name: " << diamond.getName() << std::endl;
	std::cout << "ClapTrapName: " << diamond.getClapName() << std::endl;
	std::cout << "Hit points: " << diamond.FragTrap::getHitPoints() << std::endl;
	std::cout << "Energy points: " << diamond.ScavTrap::getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << diamond.FragTrap::getAttackDamage() << std::endl;
	std::cout << GREEN << std::endl << "----- Calling attack -----" << RESET << std::endl;
	diamond.ScavTrap::attack("enemy");

	std::cout << GREEN << std::endl << "----- Calling whoAmI -----" << RESET << std::endl;
	diamond.whoAmI();

	std::cout << GREEN << std::endl << "----- Destructor calls -----" << RESET << std::endl;
	return (0);
}
