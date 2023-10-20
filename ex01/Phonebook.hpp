/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:47 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/19 23:12:29 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//tem que ter um array de contatos
// pode guardar no maximo 8 contato, a partir do 9 ele vai comecar a substituir os contatos anteriores do mais antigo para o mais novo
//nao pode usar alocacao dinamica de memoria


#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"


class Phonebook {
	private:
	Contact contacts[8];
	int index;

	public:
	Phonebook(void);
	std::string readLine();
	Contact getContact(void);
	void addContact(const Contact& contact);
	void listContacts() const;
};
#endif
