/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:09:13 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/19 15:45:42 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int		N;
	std::vector<int>	arr;
	Span(/* args */);
public:
	Span(unsigned int N);
	Span(const Span &origin);
	~Span();
	Span	&operator=(const Span &origin);

	void			addNumber(unsigned int n);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	std::vector<int> get_arr(void) const;

	void			rand_fill();
};

#endif