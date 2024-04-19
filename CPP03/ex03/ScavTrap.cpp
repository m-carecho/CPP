/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:57:38 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:46:36 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap constructed!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src ) : ClapTrap(src){
	*this = src;
	std::cout << "ScavTrap " << _name << " copy constructed!" << std::endl;
}


ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap & rhs )
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

int ScavTrap::pointsCheck()
{
	if (!_hitPoints)
	{
		std::cout << "💀 " << _name << " 💀 is dead and cannot attack" << std::endl;
		return -1;
	}
	if (!_energyPoints)
	{
		std::cout << "🧪 " << _name << " 🧪 has no energy points and cannot attack" << std::endl;
		return -1;
	}
	return 0;
}

void ScavTrap::attack(std::string const & target){
	if (pointsCheck() != -1){
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
	_energyPoints -= 1;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode" << std::endl;
}

/* ************************************************************************** */
