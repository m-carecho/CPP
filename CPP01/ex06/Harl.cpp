/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:26:16 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/09 00:00:53 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::unknown(void) {
	std::cerr << GREEN << "UNKNOWN" << RESET << std::endl;
}

void	Harl::debug(void)
{
	std::cout << BLUE << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET  << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET  << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

	const std::string Harl::levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*Harl::complaints[5])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
		&Harl::unknown
	};

	void Harl::complain( std::string level ){
		int i;
		for(i = 0; i < 4; i++){
			if(level.compare(levels[i]) == 0){
				break;
			}
		}
		switch(i){
		case 0:
			(this->*complaints[0])();
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 1:
			(this->*complaints[1])();
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 2:
			(this->*complaints[2])();
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 3:
			(this->*complaints[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << GRAY << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
			break;
		}
	}

