#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap & src );
		~ScavTrap();
		ScavTrap &		operator=( ScavTrap & rhs );
		void attack(std::string const & target);
		void guardGate();
		int  pointsCheck();
};

#endif /* ******************************************************** SCAVTRAP_H */
