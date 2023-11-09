/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:50 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/23 12:41:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
	std::string name;
	Weapon* weapon;

	public:
	HumanB(const std::string& initialName);
	~HumanB(void);
	void setWeapon(Weapon& initialWeapon);
	void attack(void);

};

#endif
