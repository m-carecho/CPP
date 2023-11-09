/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:52:13 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 23:07:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie{
	private:
	std::string name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	std::string getName(void) const;
	void setName(std::string name);

	void announce(void);

};

Zombie* zombieHorde(int N, std::string name);

#endif

