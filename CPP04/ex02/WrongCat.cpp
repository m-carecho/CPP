/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:54:25 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:58:03 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	this->brain = new Brain();
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	this->brain = src.brain;
	*this = src;
}

WrongCat::WrongCat(const std::string &defaultIdea)
{
    std::cout << "[WrongCat] Constructor with default idea called" << std::endl;
    this->_type = "WrongCat";
    this->brain = new Brain(defaultIdea);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat] 🔉 MEEOOOWWWWWW 🔉" << std::endl;
}

std::string	WrongCat::getIdeas(int index) {
	return (this->brain->getIdeas(index));
}

void	WrongCat::setIdeas(int index, std::string idea){
	return (this->brain->setIdeas(index, idea));
}
