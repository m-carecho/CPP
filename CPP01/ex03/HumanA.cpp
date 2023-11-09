/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:52 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 19:33:29 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string initialName, Weapon& initialWeapon) : name(initialName), weapon(initialWeapon){};

HumanA::~HumanA(void){};

void HumanA::attack (void) const{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
};
