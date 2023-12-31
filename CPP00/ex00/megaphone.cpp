/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:41:01 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/21 23:57:50 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstring>

int main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for(int i = 1; argv[i]; i++)
	{
		for(int j=0; argv[i][j]; j++)
			if(islower(argv[i][j]))
				std::cout << (char)toupper(argv[i][j]);
			else
				std::cout << (char)(argv[i][j]);
	}
	std::cout << std::endl;
	return 0;
}
