/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:29:17 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 19:16:13 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << std::endl << YELLOW << "Creating Animal class:" << RESET << std::endl << std::endl;
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();

	std::cout << std::endl << YELLOW << "Testing Animal class:" << RESET << std::endl << std::endl;
	std::cout << "Animal of type " << j->getType() << " created" << std::endl;
	std::cout << "Animal of type " << i->getType() << " created" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << YELLOW << "Cleaning Animal objects:" << RESET << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << YELLOW << "Creating WrongAnimal class:" << RESET << std::endl << std::endl;
	const	WrongAnimal* gama = new WrongAnimal();
	const	WrongAnimal* k = new WrongCat();

	std::cout << std::endl << YELLOW << "Testing WrongAnimal class:" << RESET << std::endl << std::endl;
	std::cout << "Animal of type " << k->getType() << " created" << std::endl;
	k->makeSound();
	gama->makeSound();

	std::cout << std::endl << YELLOW << "Cleaning WrongAnimal objects:" << RESET << std::endl << std::endl;

	delete gama;
	delete k;
	return (0);
}

