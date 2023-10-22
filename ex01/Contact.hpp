/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:40 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 22:01:57 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fica o contato do phonebook
// o contato tem que ter primeiro e ultimo nome, nickname, phone number, darksecret


#ifndef CONTACT_H
#define CONTACT_H

class Contact{
	public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darksecret;

	Contact(void); // contrutor padrao
};

#endif
