/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:28:57 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:45:54 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(){
	_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	std::cout << "Default DiamondTrap constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name),ScavTrap(name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap " << DiamondTrap::_name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap & src ){
	*this = src;
	std::cout << "DiamondTrap " << _name << " copy constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " destructed!" << std::endl;
}


DiamondTrap &				DiamondTrap::operator=( DiamondTrap & rhs )
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

std::string DiamondTrap::getName(){
	return (this->_name);
}

std::string	DiamondTrap::getClapName(void) {
	return (ClapTrap::_name);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

/* ************************************************************************** */
