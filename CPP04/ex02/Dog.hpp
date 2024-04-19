/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:30:17 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 19:07:31 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	public:

		Dog();
		Dog( Dog const & src );
		Dog(const std::string &defaultIdea);
		~Dog();

		Dog &		operator=( Dog const & rhs );
		void		makeSound(void) const;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);

	private:

		Brain *brain;
};

#endif /* ************************************************************* DOG_H */
