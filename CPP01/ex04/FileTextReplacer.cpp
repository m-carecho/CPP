/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileTextReplacer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:29:29 by mcarecho          #+#    #+#             */
/*   Updated: 2023/11/08 22:15:12 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileTextReplacer.hpp"

FileTextReplacer::FileTextReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
        : filename(filename), s1(s1), s2(s2) {}

bool FileTextReplacer::openInputFile() {
    input_file.open(filename.c_str());
    return input_file.is_open();
}
bool FileTextReplacer::readFileContent() {
    std::string line;
    while (std::getline(input_file, line)) {
        content += line + "\n";
    }
    input_file.close();
    return true;
}
void FileTextReplacer::replaceAll() {
    std::string result; // Inicializa uma nova string para armazenar o resultado da substituição.
    size_t start = 0;   // Inicializa a posição de início de busca.
    size_t end = 0;     // Inicializa a posição de fim de busca.

    // Enquanto encontrar uma ocorrência de 's1' a partir da posição 'start'.
    while ((end = content.find(s1, start)) != std::string::npos) {
        // Copia os caracteres que não correspondem antes da ocorrência de 's1' para 'result'.
        result += content.substr(start, end - start);

        // Adiciona a substituição 's2' à 'result'.
        result += s2;

        // Avança a posição de início para depois da ocorrência de 's1'.
        start = end + s1.length();
    }

    // Copia o restante do conteúdo da string após a última ocorrência de 's1' para 'result'.
    result += content.substr(start);

    // Atualiza o conteúdo original da string 'content' com o resultado da substituição.
    content = result;
}


bool FileTextReplacer::writeOutputFile() {
    output_file.open((filename + ".replace").c_str());
    if (output_file.is_open()) {
        output_file << content;
        output_file.close();
        return true;
    }
    return false;
}
bool FileTextReplacer::processFile() {
    if (!openInputFile()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return false;
    }

    if (!readFileContent()) {
        std::cerr << "Error: Unable to read file content." << std::endl;
        return false;
    }

    replaceAll();

    if (!writeOutputFile()) {
        std::cerr << "Error: Unable to create output file." << std::endl;
        return false;
    }

    std::cout << "File '" << filename << "' has been replaced and saved as '" << filename + ".replace" << "'" << std::endl;
        return true;
}
