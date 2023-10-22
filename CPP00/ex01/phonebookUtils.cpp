/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:01:43 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 21:48:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool Phonebook::isWhitespaceOrEmpty(std::string& str){
	if (str.empty())
		return true;
	else{
	for (size_t i = 0; i < str.length(); ++i)
		{
			if(!std::isspace(static_cast<unsigned char>(str[i])))
				return false;
		}
	}
	return true;
}

std::string Phonebook::readLine()
{
	std::string line;
	std::getline(std::cin, line);
	return line;
}

int Phonebook::readNumber()
{
	std::string line;
	std::getline(std::cin, line);
	if (isWhitespaceOrEmpty(line))
		return -1;
	else
		return std::stoi(line);
}

void Phonebook::verifyInput(const Contact &contact)
{
	Contact new_contact = contact;
	if (isWhitespaceOrEmpty(new_contact.first_name) || isWhitespaceOrEmpty(new_contact.last_name) || isWhitespaceOrEmpty(new_contact.nickname) || isWhitespaceOrEmpty(new_contact.phone_number) || isWhitespaceOrEmpty(new_contact.darksecret))
	{
		std::cout << RED "🚨 Error 🚨" RESET << std::endl;
		std::cout << "There is a field that is blank or filled with only space. Try again by filling in all fields correctly"  << std::endl;
	}
	else
	{
		std::cout << GREEN "Contact added" RESET << std::endl;
		addContact(new_contact);
	}
}


void Phonebook::userManual(){
	std::cout << "+---------------------------------------------+" << std::endl;
    std::cout << "|  ✨ Welcome to your awesome phonebook! ✨   |" << std::endl;
    std::cout << "|Your phone book has the incredible capacity  |" << std::endl;
    std::cout << "|to store up to 8 contacts, incredible, right?|" << std::endl;
    std::cout << "+---------------------------------------------+" << std::endl;
    std::cout << "|                                             |" << std::endl;
    std::cout << "|We have 3 great features that you can access.|" << std::endl;
    std::cout << "|     📕 Here is your pocket user manual:     |" << std::endl;
    std::cout << "|                                             |" << std::endl;
    std::cout << "+---------+-----------------------------------+" << std::endl;
    std::cout << "|COMAND    |DESCRIPTION                       |" << std::endl;
    std::cout << "+---------+-----------------------------------+" << std::endl;
    std::cout << "|📝 ADD    |Add a new contact to your list    |" << std::endl;
    std::cout << "+---------+-----------------------------------+" << std::endl;
    std::cout << "|🔍 SEARCH |Search for a contact in your phone|" << std::endl;
    std::cout << "+---------+-----------------------------------+" << std::endl;
    std::cout << "|          |Exit the phonebook. Be careful,   |" << std::endl;
    std::cout << "|❌ EXIT   |the program will close and your   |" << std::endl;
    std::cout << "|          |contacts will be lost forever ⚰️   |" << std::endl;
    std::cout << "+---------+-----------------------------------+" << std::endl << std::endl;
    std::cout << "Now choose your command:  " << std::endl;
}
