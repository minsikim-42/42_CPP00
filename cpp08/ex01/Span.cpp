/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:45:45 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/19 19:02:20 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &origin) : N(origin.N), arr(origin.get_arr()) {}

Span::~Span() {}

Span	&Span::operator=(const Span &origin)
{
	this->N = origin.N;
	this->arr = origin.get_arr();
	return *this;
}

void			Span::addNumber(unsigned int n)
{
	if (arr.size() >= N)
		throw std::exception();
	arr.push_back(n);
}

unsigned int	Span::shortestSpan()
{
	if (N < 2)
		throw std::exception();
	std::vector<int> copy = arr;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator iter = copy.begin();
	unsigned int shortest = INT_MAX;

	while (iter != copy.end())
	{
		if (shortest > (unsigned int)(*(iter + 1) - *iter))
			shortest = (unsigned int)(*(iter + 1) - *iter);
		// std::cout << *iter << std::endl;
		iter++;
	}
	return (unsigned int)shortest;
}

unsigned int	Span::longestSpan()
{
	if (N < 2)
		throw std::exception();
	std::vector<int> copy = arr;
	std::sort(copy.begin(), copy.end());
	unsigned int result = (unsigned int)(*(copy.end() - 1) - *(copy.begin()));
	return (result);
}

std::vector<int> Span::get_arr() const
{
	return (this->arr);
}

void	Span::rand_fill(void)
{
	srand(time(NULL));
	for (int i = 0; i < (int)N; i++)
	{
		int ran = rand() / 10000000;
		if (ran % 2)
			ran *= -1;
		arr.push_back(ran);
		std::cout << arr[i] << std::endl;
	}
}
