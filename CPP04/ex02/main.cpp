/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:29:17 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:57:23 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {

    // AAnimal animalArray[5];  // Isso deverá gerar um erro

	std::cout << BLUE << "<< Testing half dogs and cats with Animal class >>" << RESET<< std::endl;
	AAnimal *farm[6];

	std::cout << std::endl;
	std::cout << "Constructors Dogs" << std::endl;

	for (int i = 0; i < 3; i++)
		farm[i] = new Dog();

	std::cout << std::endl;
	std::cout << "Constructors Cats" << std::endl;

	for (int i = 3; i < 6; i++)
		farm[i] = new Cat();

	std::cout << std::endl;
	std::cout << "Destructors Dogs" << std::endl;

	for (int i = 0; i < 3; i++)
		delete farm[i];

	std::cout << std::endl;
	std::cout << "Destructors Cats" << std::endl;

	for (int i = 3; i < 6; i++)
		delete farm[i];

	std::cout << std::endl;
	std::cout << BLUE << "<< Testing default constructor >>" << RESET <<std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	dog->setIdeas(0, "AUAU");
	cat->setIdeas(0, "MEOW");

	std::cout << std::endl;
	std::cout << dog->getIdeas(0) << std::endl;
	std::cout << cat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE << "<< Testing copy constructor >>" << RESET << std::endl;
	Dog *cpyDog = new Dog(*dog);
	Cat *cpyCat = new Cat(*cat);

	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;

	cpyDog->setIdeas(0, "AUAU 🐕🐕🐕🐕!");
	cpyCat->setIdeas(0, "MEOW 🐈🐈🐈🐈!");

	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE << "<< Testing filling in all ideas >>" << RESET << std::endl;

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			cat->setIdeas(i,"I am Alive ❤️  ❤️  ❤️");
		else
			cat->setIdeas(i,"I am Dead ☠️  ☠️  ☠️");

	}

	std::cout << "Getting index 10: "<<cat->getIdeas(10) << std::endl;
	std::cout << "Getting index 99: "<<cat->getIdeas(99) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE << "<< Testing Shallow Copy >>" << RESET << std::endl;
    WrongCat cat1("Default Cat Idea");
    WrongCat cat2 = cat1;
	std::cout << std::endl;

    std::cout << "Original Cat ideas: " << cat1.getIdeas(0) << std::endl;
    std::cout << "Copied Cat ideas: " << cat2.getIdeas(0) << std::endl;
    cat2.setIdeas(0, "New Idea");
	std::cout << std::endl;

    std::cout << "After modifying original Cat ideas:" << std::endl;
    std::cout << "Original Cat ideas: " << cat1.getIdeas(0) << std::endl;
    std::cout << "Copied Cat ideas: " << cat2.getIdeas(0) << std::endl;
	std::cout << std::endl;

    std::cout << BLUE << "<< Testing Deep Copy >>" << RESET << std::endl;
    Dog dog1("Default Dog Idea");
    Dog dog2 = dog1;
	std::cout << std::endl;

    std::cout << "Original Dog ideas: " << dog1.getIdeas(0) << std::endl;
    std::cout << "Copied Dog ideas: " << dog2.getIdeas(0) << std::endl;
	std::cout << std::endl;

    dog1.setIdeas(0, "New Idea");
    std::cout << "After modifying original Dog ideas:" << std::endl;
    std::cout << "Original Dog ideas: " << dog1.getIdeas(0) << std::endl;
    std::cout << "Copied Dog ideas: " << dog2.getIdeas(0) << std::endl;
	std::cout << std::endl;

	delete dog;
	delete cat;
	delete cpyDog;
	delete cpyCat;

	return (0);
}

