/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enderecosVar.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:07:36 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 19:08:34 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(){
	int copos = 6;
	double cafe = 4.5;

	cout << "Valor de copos: " << copos << endl;
	cout << "Endereco de copos: " << &copos << endl;
	cout << "Valor de cafe: " << cafe << endl;
	cout << "Endereco de cafe: " << &cafe << endl;
}
