/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:06:58 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:41:26 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << std::endl << GREEN << "----- Constructor calls -----" << RESET << std::endl ;
	ClapTrap defaultTrap;
	ClapTrap hero("Hero");
	ClapTrap enemy("Enemy");


	std::cout << std::endl << GREEN << "----- Object attributes - initialization values -----" << RESET << std::endl ;

	defaultTrap.characterAttributes();
	hero.characterAttributes();
	enemy.characterAttributes();

	std::cout << std::endl << GREEN << "----- Calling Attack method -----" << RESET << std::endl ;
	hero.attack("Enemy");
	enemy.attack("Hero");

	std::cout << std::endl << GREEN << "----- Object attributes - values ​​after attack -----" << RESET << std::endl ;
	hero.characterAttributes();
	enemy.characterAttributes();

	std::cout << std::endl << GREEN << "----- Calling Repair method -----" << RESET << std::endl ;
	hero.beRepaired(12);
	hero.characterAttributes();

	std::cout << std::endl << GREEN << "----- Object attributes - values ​​after Repair -----" << RESET << std::endl ;
	hero.characterAttributes();
	enemy.characterAttributes();

	std::cout << std::endl << GREEN << "----- setting the hero's energy points to 0 -----" << RESET << std::endl ;
	hero.setEnergyPoints(0);
	hero.characterAttributes();

	std::cout << std::endl << GREEN << "----- Hero trying to attack without energy points -----" << RESET << std::endl ;
	hero.attack("Enemy");

	std::cout << std::endl << GREEN << "----- setting the enemy's hit points to 0 -----" << RESET << std::endl ;
	enemy.setHitPoints(0);
	enemy.characterAttributes();

	std::cout << std::endl << GREEN << "----- Enemy trying to attack without hit points -----" << RESET << std::endl ;
	enemy.attack("Hero");


	return (0);
}
