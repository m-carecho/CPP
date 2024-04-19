/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:30:20 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:46:00 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap & rhs );
		std::string getName();
		std::string getClapName();
		void whoAmI(void);
	private:
		std::string _name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */
