/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:55:00 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 11:35:28 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
private:
	unsigned int maxsize;
	std::vector<int> vec;
	Span();
public:
	Span(unsigned int _maxsize);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);

	void addNumber(int num);
	int shortestSpan() const;
	int longestSpan() const;

	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class SpanIsFullException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FewNumberException : public std::exception
	{
	public:
		const char *what() const throw();
	};

};

#endif