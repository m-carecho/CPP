/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:47 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 22:11:35 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tem que ter um array de contatos
//  pode guardar no maximo 8 contato, a partir do 9 ele vai comecar a substituir os contatos anteriores do mais antigo para o mais novo
// nao pode usar alocacao dinamica de memoria

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"

#define RED "\x1b[1;31m"
#define CYAN "\x1b[1;36m"
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define ORANGE "\x1b[1;38;5;208m"
#define BLACK "\033[30m"
#define TABLE "-----------------------------"


class Phonebook{
public:
	Phonebook(void);
	std::string readLine();
	int index;
	void getContact();
	void verifyInput(const Contact &contact);
	void printTable();
	void printFullContact();
	void userManual();

private:
	Contact contacts[8];
	std::string columnTitles[4];
	std::string table[10][4];
	std::string rightAlignText(std::string &text, int width);
	int lowestIndex;
	int readNumber();
	bool isWhitespaceOrEmpty(std::string& str);
	void addContact(const Contact &contact);
	void populateFromPhonebook();
	void setColumnTitle();
	void printHorizontalLine();
};
#endif
