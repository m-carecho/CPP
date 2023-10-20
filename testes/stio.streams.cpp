/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stio.streams.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:11:45 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/18 11:22:01 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cin e cout -> magicl objects que permitem a leitura e escrita de dados em c++
//<< e >>

#include <iostream>

int main (){
	char buff[512];

	std::cout << "Hello World !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff <<"]" << std::endl;

	return 0;
}
