#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		WrongCat(const std::string &defaultIdea);
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );
		void			makeSound(void) const;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);

	private:
		Brain *brain;
};
#endif /* ******************************************************** WRONGCAT_H */
