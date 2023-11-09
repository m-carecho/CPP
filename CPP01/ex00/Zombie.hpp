/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:03:37 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 22:20:09 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

#define BOLD "\x1b[1m"
#define RED "\x1b[1;31m"
#define GREEN "\x1b[32m"
#define CYAN "\x1b[1;36m"
#define RESET "\x1b[0m"

class Zombie{
	private:
	std::string name;

	public:
	Zombie(std::string name);
	~Zombie(void);

	std::string getName(void) const;
	void setName(std::string name);

	void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
