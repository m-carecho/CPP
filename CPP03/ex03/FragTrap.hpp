/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:30:12 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/19 11:46:14 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( std::string name );
		FragTrap( FragTrap & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap & rhs );
		void highFivesGuys();
		void attack(std::string const & target);
		int  pointsCheck();
};

#endif /* ******************************************************** FRAGTRAP_H */
