/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileTextReplacer.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:29:31 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 21:47:23 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILETEXTREPLACER_H
#define FILETEXTREPLACER_H
#include <iostream>
#include <fstream>
#include <string>

class FileTextReplacer{
private:
    std::string filename;
    std::string s1;
    std::string s2;
    std::string content;
	std::ifstream input_file;
    std::ofstream output_file;

public:
	FileTextReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
	bool openInputFile();
	bool readFileContent();
	void replaceAll();
	bool writeOutputFile();
	bool processFile();

};

#endif
