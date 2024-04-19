#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat( Cat const & src );
		Cat( const std::string &defaultIdea);
		~Cat();

		Cat &		operator=( const Cat & rhs );
		void		makeSound(void) const;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);

	private:

	Brain *brain;

};

#endif /* ************************************************************* CAT_H */
