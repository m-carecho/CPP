/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:32:16 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:45:39 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

std::string ClapTrap::getName()
{
	return (_name);
}

int ClapTrap::getHitPoints()
{
	return (_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
	return (_energyPoints);
}

int ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}

void ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

int ClapTrap::pointsCheck()
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

void ClapTrap::characterAttributes()
{
	std::cout << YELLOW << "CHARACTERE ATTRIBUTES" << RESET << std::endl;
	std::cout << WHITE <<"Name         : " << RESET << _name << std::endl;
	std::cout << WHITE <<"Hit Points   : " << RESET << _hitPoints << std::endl;
	std::cout << WHITE <<"Energy Points: "  << RESET << _energyPoints << std::endl;
	std::cout << WHITE <<"Attack Damage: " << RESET << _attackDamage << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	if (pointsCheck() != -1){
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (pointsCheck() != -1){
	if (amount >= static_cast<unsigned int>(_hitPoints))
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and dies!" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining Hit Points: " << _hitPoints << std::endl;
	}
	return;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (pointsCheck() != -1){
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
	_energyPoints -= 1;
	return;
	}
}
