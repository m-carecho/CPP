/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alocacaoMemoria.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:23:47 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 20:26:59 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int main()
{
	int *pi = new int;
	*pi = 1001;
	cout << "Valor inteiro = " << *pi << endl;
	cout << "Localizacao = " << pi << endl << endl;

	double *pd = new double;
	*pd = 500.35;
	cout << "Valor double = " << *pd << endl;
	cout << "Localizacao = " << pd << endl << endl;

	cout << "Tamanho de pi = " << sizeof(pi) << endl;
	cout << "Tamanho de *pi = "  << sizeof(*pi) << endl;
	cout << "Tamanho de pd = " << sizeof(pd) << endl;
	cout << "Tamanho de *pd = " << sizeof(*pd) << endl;
}
