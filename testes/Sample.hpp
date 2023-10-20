/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:47:12 by mcarecho          #+#    #+#             */
/*   Updated: 2023/10/18 19:52:51 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H

// class Sample{
// 	public:

// 	int foo;
// 	Sample(void); // cria uma classe
// 	~Sample(void); // destroi uma classe

// 	void bar(void);
// };

class Sample{
	public:

	char a1;
	int a2;
	float a3;

	Sample(char p1, int p2, float p3);
	~Sample(void);
};

#endif
