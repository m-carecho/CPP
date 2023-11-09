/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:48:01 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 23:51:03 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::unknown(void) {
	std::cerr << GREEN << "UNKNOWN" << RESET << std::endl;}

void	Harl::debug(void)
{
	std::cout << BLUE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET  << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << ORANGE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET  << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
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
		for(int i = 0; i < 4; i++){
			if(level == levels[i]){
				(this->*complaints[i])();
				return;
			}
		}
		(this->*complaints[4])();
	}
