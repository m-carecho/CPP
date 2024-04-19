/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:30:17 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:45:54 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:

		Dog();
		Dog( Dog const & src );
		Dog(const std::string &defaultIdea);
		~Dog();

		Dog &		operator=(const Dog & rhs );
		void		makeSound(void) const;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);

	private:

		Brain *brain;
};

#endif /* ************************************************************* DOG_H */
