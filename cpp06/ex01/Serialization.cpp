/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:40 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/13 22:12:54 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data::Data(){}

Data::Data(const Data &da) : data(42)
{
	*this = da;
}

Data::~Data(){}

Data	&Data::operator=(const Data &da)
{
	this->data = da.data;
	return *this;
}

int	Data::get_data(void)
{
	return this->data;
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