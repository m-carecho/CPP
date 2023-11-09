/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacjHeap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:34:58 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/22 15:40:10 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


//alocacao automatica
void stack(){
	int a = 5;
}


//Alocacao dinamica
void heap(){
	int *p = new int;
	*p = 5;
	delete p;
}

//chamando 10 milhoes de vezes cada uma dessas funcoes para ver qual e mais rapida
int main (){
	auto start = high_resolution_clock::now();

	for (int i = 0; i < 10000000; ++i)
		stack();

	auto end = high_resolution_clock::now();
	cout << "Stack: " << duration_cast<milliseconds>(end - start).count() << "millisegundos\n";

	start = high_resolution_clock::now();

	for (int i=0; i<10000000; ++i)
		heap();

	end = high_resolution_clock::now();
	cout << "Heap: " << duration_cast<milliseconds>(end - start).count() << "millisegundos\n";
}


