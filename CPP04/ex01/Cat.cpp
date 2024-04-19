/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:51:44 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 19:32:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat::Cat(const std::string &defaultIdea)
{
    std::cout << "[Cat] Constructor with default idea called" << std::endl;
    this->_type = "Cat";
    this->brain = new Brain(defaultIdea);
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete this->brain;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	std::cout << "[Cat] copy assignation operator called" << std::endl;
	*(this->brain)= *(rhs.brain);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "[Cat] 🔉 meow meow 🔉" << std::endl;
}

std::string	Cat::getIdeas(int index) {
	return (this->brain->getIdeas(index));
}

void	Cat::setIdeas(int index, std::string idea){
	return (this->brain->setIdeas(index, idea));
}

/* ************************************************************************** */
