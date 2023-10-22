/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:50 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 21:51:06 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() : index(0), lowestIndex(0){};

void Phonebook::getContact()
{
	Contact new_contact;

	if (index >= 8){
		std::cout << ORANGE "⚠️  The Phonebook is full. This contact will cause the oldest one to be replaced. ⚠️" RESET << std::endl;
	}
	std::cout << "First name  : ";
	new_contact.first_name = readLine();
	std::cout << "Last name   : ";
	new_contact.last_name = readLine();
	std::cout << "Nickname    : ";
	new_contact.nickname = readLine();
	std::cout << "phone number: ";
	new_contact.phone_number = readLine();
	std::cout << "darksecret  : ";
	new_contact.darksecret = readLine();
	verifyInput(new_contact);
}

void Phonebook::addContact(const Contact &contact){
	if (index < 8){
		contacts[index] = contact;
		index++;
	}
	else{
		lowestIndex = (lowestIndex + 1) % 8;
		contacts[index % 8] = contact;
		index++;
	}
}



void Phonebook::printFullContact(){
	int searchIndex;
	std::cout << "Enter the index of the contact you want to see: ";
	searchIndex = readNumber();
	if (searchIndex > 0 && searchIndex <= 8 && searchIndex <= index )
	{
		searchIndex = (searchIndex - 1 + lowestIndex) % 8;
		std::cout << "First name  : " << contacts[searchIndex].first_name << std::endl;
		std::cout << "Last name   : " << contacts[searchIndex].last_name << std::endl;
		std::cout << "Nickname    : " << contacts[searchIndex].nickname << std::endl;
		std::cout << "phone number: " << contacts[searchIndex].phone_number << std::endl;
		std::cout << "darksecret  : " << contacts[searchIndex].darksecret << std::endl;
	}
	else
	{
		std::cout << RED "🚨 Error 🚨" RESET << std::endl;
		std::cout << "The index you entered is invalid. Try again" << std::endl;
	}
}
