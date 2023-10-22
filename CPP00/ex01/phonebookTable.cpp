/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebookTable.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:02:03 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 22:17:24 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::printHorizontalLine()
{
	std::cout << "+";
	for (int i = 0; i < 4; i++){
		for (int k = 0; k < 10; k++)
			std::cout << "-";
		std::cout << "+";
	}
	std::cout << std::endl;
}

void Phonebook::setColumnTitle()
{
	columnTitles[0] = "Index";
	columnTitles[1] = "First name";
	columnTitles[2] = "Last name";
	columnTitles[3] = "Nickname";
}

void Phonebook::populateFromPhonebook()
{

	for (int i = 0; i < 8; i++)
	{
		int indexTmp = (i + lowestIndex) % 8;
		table[i][0] = std::to_string(i + 1);
		table[i][1] = contacts[indexTmp].first_name;
		table[i][2] = contacts[indexTmp].last_name;
		table[i][3] = contacts[indexTmp].nickname;
	}
}

std::string Phonebook::rightAlignText(std::string &text, int width)
{
	std::string truncated;
	if (text.size() > static_cast<std::string::size_type>(width))
		truncated = text.substr(0, width - 1) + ".";
	else
		truncated = text;
	int padding = width - truncated.length();
	if (padding >= 1)
		return std::string(padding, ' ') + truncated;
	else
		return truncated;
}

void Phonebook::printTable()
{
	setColumnTitle();
	printHorizontalLine();
	std::cout << "|" << rightAlignText(columnTitles[0], 10) << "|" << rightAlignText(columnTitles[1], 10) << "|" << rightAlignText(columnTitles[2], 10) << "|" <<  rightAlignText(columnTitles[3], 10) << "|" << std::endl;
	populateFromPhonebook();
	printHorizontalLine();

	for (int i = 0; i < index && i < 8; i++)
	{
		std::cout << "|" << rightAlignText(table[i][0], 10) << "|" << rightAlignText(table[i][1], 10) << "|" << rightAlignText(table[i][2], 10) << "|" << rightAlignText(table[i][3], 10) << "|" << std::endl;
		if (i < 8 - 1)
			printHorizontalLine();
	}
	if (index > 7)
		printHorizontalLine();
}
