/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:48 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/23 13:14:45 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& initialName) : name(initialName), weapon(NULL) {}

HumanB::~HumanB(void){};

void HumanB::setWeapon(Weapon& initialWeapon){
	weapon = &initialWeapon;
};

void HumanB::attack(void){
	if(weapon){
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else
		std::cout << "👐 " << name << " is unarmed. 👐" << std::endl;
};
