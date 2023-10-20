/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:54:24 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/18 18:00:15 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

int main(void){
	Sample instance;

	instance.foo = 42;
	std::cout << "intance.foo:" << instance.foo << std::endl;

	instance.bar();

	return 0;
}
