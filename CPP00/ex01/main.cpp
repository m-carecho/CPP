/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:42:24 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 21:51:50 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(){
	Phonebook phonebook;

    phonebook.userManual();
	while (true){
		std::string command;
        std::cout << GREEN " 📝 ADD"; std::cout << CYAN " 🔍 SEARCH"; std::cout << RED " ❌ EXIT " RESET  << std::endl;

        command = phonebook.readLine();
        if (command == "ADD")
            phonebook.getContact();
        else if (command == "SEARCH") {
            if (phonebook.index == 0)
		    std::cout << "No contacts in the phonebook." << std::endl;
	        else {
                phonebook.printTable();
                phonebook.printFullContact();
            }
        }else if (command == "EXIT") {
            break;
        } else {
            std::cout << RED "🚨 Error 🚨" RESET << std::endl;
            std::cout << "Invalid input, please try again.." << std::endl;
        }
    }

    return 0;
}
