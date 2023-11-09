/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:42:03 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 19:35:00 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon{
	private:
	std::string type;

	public:
	Weapon(std::string initialType);
	~Weapon(void);
	const std::string & getType() const;
	void setType(std::string newType);
};

#endif
