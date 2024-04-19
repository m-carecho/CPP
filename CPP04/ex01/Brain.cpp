/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:42:04 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:40:19 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = src;
}

Brain::Brain(const std::string &defaultIdea)
{
	std::cout << "[Brain] Constructor with default idea called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = defaultIdea;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "[Brain] Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string	Brain::getIdeas(int index) {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return ("");
}

void	Brain::setIdeas(int index, std::string idea){
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Out of ideas range!" << std::endl;
}

