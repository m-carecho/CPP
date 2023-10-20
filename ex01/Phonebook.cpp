/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:50 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/20 00:16:13 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(): index(0) {};

std::string  Phonebook::readLine() {
    std::string line;

    std::getline(std::cin, line);
    return line;
}

Contact Phonebook::getContact(){
	Contact new_contact;
	std::string fName, lName, nName, pNumber, dSecret;

	std::cout << "First name  : ";
	fName = readline();
	std::cout << "Last name   : ";
	lName = readLine();
	std::cout << "Nickname: ";
	nName = readLine();
	std::cout << "phone number: ";
	pNumber = readLine();
	std::cout << "darksecret  : ";
	dSecret  = readLine();

	new_contact.first_name = fName;
	new_contact.last_name = lName;
	new_contact.nickname = nName;
	new_contact.phone_number = pNumber;
	new_contact.darksecret = dSecret;

	if (new_contact.first_name.empty() || new_contact.last_name.empty() || new_contact.nickname.empty() || new_contact.phone_number.empty() || new_contact.darksecret.empty()){
		std::cout << RED "Error: empty field" RESET << std::endl;
        std::cout << "First Name: " << new_contact.first_name << std::endl;
        std::cout << "Last Name: " << new_contact.last_name << std::endl;
        std::cout << "Nickname: " << new_contact.nickname << std::endl;
        std::cout << "Phone Number: " << new_contact.phone_number << std::endl;
        std::cout << "Dark Secret: " << new_contact.darksecret << std::endl;
	}
	else{
		std::cout << GREEN "Contact added" RESET << std::endl;
        std::cout << "First Name: " << new_contact.first_name << std::endl;
        std::cout << "Last Name: " << new_contact.last_name << std::endl;
        std::cout << "Nickname: " << new_contact.nickname << std::endl;
        std::cout << "Phone Number: " << new_contact.phone_number << std::endl;
        std::cout << "Dark Secret: " << new_contact.darksecret << std::endl;

	}
	return (new_contact);
}

void Phonebook::addContact(const Contact& contact){

	if (index < 8){
		contacts[index] = contact;
		index++;
	} else{
		std::cout << YELLOW "Phonebook is full. The oldest one will be replaced by the new one." RESET << std::endl;
		contacts[index % 8] = contact;
		index = (index + 1) % 8;
	}
}

void Phonebook::listContacts() const{
	if (index == 0) {
        std::cout << "Nenhum contato na lista telefônica." << std::endl;
        return;
    }

    std::cout << "Lista de Contatos:" << std::endl;
    for (int i = 0; i < index; i++) {
        std::cout << "Contato " << i + 1 << ":" << std::endl;
        std::cout << "First Name: " << contacts[i].first_name << std::endl;
        std::cout << "Last Name: " << contacts[i].last_name << std::endl;
        std::cout << "Nickname: " << contacts[i].nickname << std::endl;
        std::cout << "Phone Number: " << contacts[i].phone_number << std::endl;
        std::cout << "Dark Secret: " << contacts[i].darksecret << std::endl;
    }
}

