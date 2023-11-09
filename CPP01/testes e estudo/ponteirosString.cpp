/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteirosString.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:03:33 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 20:05:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(){
	//inicia o vetor com a constante string
	char nome[20] = "Joaozinho";
	cout << nome << endl;

	//manupula elementos com um ponteiro
	char *ptr = &nome[1];
	*ptr = 'P';
	cout << ptr << endl;

	nome[0] = 'T';
	*ptr = 'i';
	cout << nome << endl;
}
