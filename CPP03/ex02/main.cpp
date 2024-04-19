/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:06:58 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:44:00 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl << CYAN << "----- FragTrap Constructor calls -----" << RESET << std::endl ;
	FragTrap fragDefaultTrap;
	FragTrap fragHero("fragHero");
	FragTrap fragEnemy("fragEnemy");

	std::cout << std::endl << CYAN << "----- FragTrap Object attributes - initialization values -----" << RESET << std::endl ;
	fragDefaultTrap.characterAttributes();
	fragHero.characterAttributes();
	fragEnemy.characterAttributes();

	std::cout << std::endl << CYAN << "----- FragTrap Calling Attack method -----" << RESET << std::endl ;
	fragHero.attack("fragEnemy");
	fragEnemy.attack("fragHero");

	std::cout << std::endl << CYAN << "----- FragTrap Take Damage method -----" << RESET << std::endl ;
	fragHero.ClapTrap::takeDamage(fragEnemy.getAttackDamage());
	fragEnemy.ClapTrap::takeDamage(fragHero.getAttackDamage());

	std::cout << std::endl << CYAN << "----- FragTrap Object attributes - values ​​after Take Damage -----" << RESET << std::endl ;
	fragHero.characterAttributes();
	fragEnemy.characterAttributes();

	std::cout << std::endl << CYAN << "----- FragTrap hero calling highFivesGuys method -----" << RESET << std::endl ;
	fragHero.highFivesGuys();

	std::cout << std::endl << CYAN << "----- FragTrap setting the hero's energy points to 0 -----" << RESET << std::endl ;
	fragHero.setEnergyPoints(0);
	fragHero.characterAttributes();

	std::cout << std::endl << CYAN << "----- FragTrap Hero trying to attack without energy points -----" << RESET << std::endl ;
	fragHero.attack("fragEnemy");

	std::cout << std::endl << CYAN << "----- FragTrap setting the enemy's hit points to 0 -----" << RESET << std::endl ;
	fragEnemy.setHitPoints(0);
	fragEnemy.characterAttributes();

	std::cout << std::endl << CYAN << "----- FragTrap Enemy trying to attack without hit points -----" << RESET << std::endl ;
	fragEnemy.attack("fragHero");

	std::cout << std::endl << CYAN << "----- Destructors -----" << RESET << std::endl ;

	return (0);
}
