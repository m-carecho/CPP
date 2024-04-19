/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:04:06 by mcarecho          #+#    #+#             */
/*   Updated: 2024/04/14 17:13:49 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int _n) : _size(_n) {}

Span::Span(const Span &other)
{
    *this = other;
    return;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_size = other._size;
        this->_vec = other._vec;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->_vec.size() < this->_size)
        this->_vec.push_back(n);
    else
        throw Span::SpanException("\033[1;31m Span is full \033[0m");
}

int Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw Span::SpanException("\033[1;31m Span is empty or has only one element \033[0m");
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    unsigned int shortest_span = std::numeric_limits<unsigned int>::max();
    for (size_t i = 1; i < tmp.size(); ++i)
    {
        unsigned int span = tmp[i] - tmp[i - 1];
        if (span < shortest_span)
            shortest_span = span;
    }
    return shortest_span;
}

int Span::longestSpan()
{
    if (this->_vec.size() < 2)
        throw Span::SpanException("\033[1;31m Span is empty or has only one element \033[0m");
    int min_element = *std::min_element(_vec.begin(), _vec.end());
    int max_element = *std::max_element(_vec.begin(), _vec.end());

    int longest_span = max_element - min_element;

    return longest_span;
}

void Span::randomFill()
{
    srand(static_cast<unsigned int>(time(0)));
    size_t remaining_elements = this->_size - this->_vec.size();
    if (remaining_elements > 0)
    {
        // Loop para adicionar elementos ao vetor
        for (size_t i = 0; i < remaining_elements; ++i)
        {
            // Gera um número aleatório e adiciona ao vetor
            this->_vec.push_back(rand());
        }
    }
    else
    {
        throw Span::SpanException("\033[1;31m Span is full \033[0m");
    }
}

Span::SpanException::SpanException(const char *msg) : _msg(msg) {}

const char *Span::SpanException::what() const throw()
{
    return (this->_msg);
}
