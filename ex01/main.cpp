/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:42:24 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/19 21:19:47 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(){

	Phonebook phonebook;
	Contact novoContato;

	while (true){
		std::cout << "Digite um comando (add, search, exit): ";
        std::string command;
        std::cin >> command;

        if (command == "add") {
            novoContato = phonebook.getContact(); // Obtém o novo contato
            phonebook.addContact(novoContato); // Adiciona o contato à lista
        } else if (command == "search") {
           std::cout << "q";
        } else if (command == "exit") {
            break; // Sai do loop e encerra o programa
        } else {
            std::cout << "Comando inválido. Tente novamente." << std::endl;
        }
    }

    return 0;
}
