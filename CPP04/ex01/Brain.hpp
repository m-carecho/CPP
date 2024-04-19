/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:42:19 by mcarecho          #+#    #+#             */
/*   Updated: 2024/01/23 18:39:49 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( const Brain  & src );
		Brain( const std::string &defaultIdea);
		~Brain();

		Brain &		operator=(const Brain & rhs );
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);

	private:
		std::string ideas[100];

};

#endif /* *********************************************************** BRAIN_H */
