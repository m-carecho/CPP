/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:42:00 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 19:35:08 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string initialType) : type(initialType){};

Weapon::~Weapon(void){};

const std::string & Weapon::getType() const{
	return (type);
};

void Weapon::setType(std::string newType){
	type = newType;
};
