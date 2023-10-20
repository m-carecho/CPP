/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:47:10 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/18 19:59:06 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

// Sample::Sample(void){
// 	std::cout << "Chamando o contrutor" << std::endl;

// 	this->foo = 42;
// 	std::cout << "this->foo:" << this->foo << std::endl;

// 	this->bar();

// 	return;
// }

// Sample::~Sample( void ){
// 	std::cout << "Chamando o destruidor" << std::endl;
// 	return;
// }

// void Sample::bar(void){
// 	std::cout << "Chamando o metodo bar" << std::endl;
// 	return;

Sample::Sample(char p1, int p2, float p3){
	std::cout << "Contrutor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return;
}
