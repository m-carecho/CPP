/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:26:13 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 23:49:51 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>
#include <string>

// Colors
const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string WHITE = "\033[1;37m";
const std::string ORANGE = "\033[1;38;5;202m";
const std::string GRAY = "\033[1;30m";

class Harl{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void unknown( void );
	static const std::string levels[4];
	static void (Harl::*complaints[5])(void);

	public:
	void complain( std::string level );

};

#endif
