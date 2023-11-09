/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:24:19 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 21:51:31 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileTextReplacer.hpp"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    FileTextReplacer fileProcessor(filename, s1, s2);
    if (!fileProcessor.processFile()) {
        return 1;
    }

    return 0;
}
