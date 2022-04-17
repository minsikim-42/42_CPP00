/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:40 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/17 10:43:44 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : i(42), j(1), k(12345), l(100)
{
	for (int i = 0; i < CH; i++)
		c[i] = 'c';
	c[CH - 1] = '\0';
}

char	*Data::get_c(void)
{
	return this->c;
}

int		Data::get_i(void)
{
	return this->i;
}

int		Data::get_j(void)
{
	return this->j;
}

int		Data::get_k(void)
{
	return this->k;
}

int		Data::get_l(void)
{
	return this->l;
}

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	p;

	p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data*	deserialize(uintptr_t raw)
{
	Data*	data;
	
	data = reinterpret_cast<Data *>(raw);
	return data;
}
