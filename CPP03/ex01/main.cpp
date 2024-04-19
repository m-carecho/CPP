/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:06:58 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:42:26 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl << BLUE << "----- Scavtrap Constructor calls -----" << RESET << std::endl ;
	ScavTrap scavDefaultTrap;
	ScavTrap scavHero("scavHero");
	ScavTrap scavEnemy("scavEnemy");

	std::cout << std::endl << BLUE << "----- Scavtrap Object attributes - initialization values -----" << RESET << std::endl ;
	scavDefaultTrap.characterAttributes();
	scavHero.characterAttributes();
	scavEnemy.characterAttributes();

	std::cout << std::endl << BLUE << "----- Scavtrap Calling Attack method -----" << RESET << std::endl ;
	scavHero.attack("scavEnemy");
	scavEnemy.attack("scavHero");

	std::cout << std::endl << BLUE << "----- Scavtrap Take Damage method -----" << RESET << std::endl ;
	scavHero.ClapTrap::takeDamage(scavEnemy.getAttackDamage());
	scavEnemy.ClapTrap::takeDamage(scavHero.getAttackDamage());

	std::cout << std::endl << BLUE << "----- Scavtrap Object attributes - values ​​after Take Damage -----" << RESET << std::endl ;
	scavHero.characterAttributes();
	scavEnemy.characterAttributes();

	std::cout << std::endl << BLUE << "----- Scavtrap hero calling guardGate method -----" << RESET << std::endl ;
	scavHero.guardGate();

	std::cout << std::endl << BLUE << "----- Scavtrap setting the hero's energy points to 0 -----" << RESET << std::endl ;
	scavHero.setEnergyPoints(0);
	scavHero.characterAttributes();

	std::cout << std::endl << BLUE << "----- Scavtrap Hero trying to attack without energy points -----" << RESET << std::endl ;
	scavHero.attack("scavEnemy");

	std::cout << std::endl << BLUE << "----- Scavtrap setting the enemy's hit points to 0 -----" << RESET << std::endl ;
	scavEnemy.setHitPoints(0);
	scavEnemy.characterAttributes();

	std::cout << std::endl << BLUE << "----- Scavtrap Enemy trying to attack without hit points -----" << RESET << std::endl ;
	scavEnemy.attack("scavHero");

	std::cout << std::endl << BLUE << "----- Destructors -----" << RESET << std::endl ;

	return (0);
}

