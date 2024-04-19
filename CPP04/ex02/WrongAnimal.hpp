#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		std::string			getType(void) const;
		virtual void				makeSound(void) const;


};

#endif /* ***************************************************** WRONGANIMAL_H */
