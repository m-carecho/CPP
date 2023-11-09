/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteirosVetores.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:45:14 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 19:49:18 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct jogador {
	char nome[20];
	float salario;
	unsigned gols;
};

int main(){
	jogador time[22];
	jogador *estrela = &time[0];

	cout << "Digite o nome, salario e gols de dois jogadores: " << endl;
	cin >> time[0].nome; cin >> time[0].salario; cin >> time[0].gols;
	cin >> time[1].nome; cin >> time[1].salario; cin >> time[1].gols;

	cout << "\nO jogador estrela do time é " << estrela->nome << "!\n";
	return 0;
}
