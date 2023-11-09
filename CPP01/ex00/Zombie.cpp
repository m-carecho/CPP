/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:03:34 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 22:40:06 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(void){
	std::cout << "🧟 " << name << " 🔫" << " was killed, thank you destroyer" << std::endl << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

std::string Zombie::getName(void) const{
	return (name);
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
