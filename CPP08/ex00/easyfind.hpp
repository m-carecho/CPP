/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:50:46 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/13 18:52:18 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string WHITE = "\033[1;37m";
const std::string ORANGE = "\033[1;38;5;202m";
const std::string GRAY = "\033[1;30m";
const std::string CYAN = "\033[1;36m";

class NotFoundException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return ("\033[1;31mElement not found\033[0m");
	}
};

template <typename T>
typename T::iterator easyfind(T &arr, int n)
{
    typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), n);
    if (it != arr.end()) {
        std::cout << "\033[1;32mElement found\033[0m" << std::endl;
        return it;
    }
    else {
        throw NotFoundException();
    }
}

#endif
