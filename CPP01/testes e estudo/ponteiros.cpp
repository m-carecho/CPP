/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiros.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:16:25 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 19:18:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(){
	int total = 6; // declaracao da variavel total
	int *ptr; // declaracao do ponteiro

	ptr = &total; // atribuiendereco de total

	cout << "Conteudo de total: " << total << endl;
	cout << "Conteudo apontado: " << *ptr << endl;

	cout << "Endereco de total: " << &total << endl;
	cout << "Endereco apontado: " << ptr << endl;

	*ptr = *ptr + 1; // altera valor
	cout << "Conteudo de total atualizado: " << total << endl;
}
