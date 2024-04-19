/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:46:33 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 23:47:00 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <list>
#include <iterator>

class RPN {
	private:
		std::list<char>	expressionElements;

		int	checkInput(std::string input);
	public:
		RPN();
		~RPN();
		RPN(RPN const &src);
		RPN &operator=(RPN const &rhs);

		std::list<char>	getExpressionElements() const;

		int	calculate(std::string input);
};

std::ostream	&operator<<(std::ostream &o, RPN const &b);

#endif

