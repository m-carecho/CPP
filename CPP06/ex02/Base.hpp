/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:31:55 by mcarecho          #+#    #+#             */
/*   Updated: 2024/02/25 17:32:14 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <stdint.h>

// Base class
class Base {
    public:
        virtual ~Base(void);
};

// Inherited classes
class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
