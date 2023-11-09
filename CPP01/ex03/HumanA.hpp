/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:55 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 19:38:46 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	private:
	std::string name;
	Weapon & weapon;

	public:
	HumanA(std::string initialName, Weapon& initialWeapon);
	~HumanA(void);
	void attack (void) const;

};

#endif
