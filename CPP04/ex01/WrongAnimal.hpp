#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		std::string			getType(void) const;
		void				makeSound(void) const;


};

#endif /* ***************************************************** WRONGANIMAL_H */
