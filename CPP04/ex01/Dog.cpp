/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:30:21 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:43:35 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog::Dog(const std::string &defaultIdea)
{
    std::cout << "[Dog] Constructor with default idea called" << std::endl;
    this->_type = "Dog";
    this->brain = new Brain(defaultIdea);
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	std::cout << "[Dog] copy assignation operator called" << std::endl;
	*(this->brain)= *(rhs.brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "[Dog] 🔉 AU AU 🔉" << std::endl;
}

std::string	Dog::getIdeas(int index) {
	return (this->brain->getIdeas(index));
}

void	Dog::setIdeas(int index, std::string idea){
	return (this->brain->setIdeas(index, idea));
}
