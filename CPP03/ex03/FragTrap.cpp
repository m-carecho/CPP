/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:17:33 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:46:07 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default FragTrap constructed!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_attackDamage = 30;;
	std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap( FragTrap & src ) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap " << _name << " copy constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap & rhs )
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

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << _name << " wants to high five!" << std::endl;
}

int FragTrap::pointsCheck()
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

void FragTrap::attack(std::string const & target){
	if (pointsCheck() != -1){
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
	_energyPoints -= 1;
	}
}

/* ************************************************************************** */
