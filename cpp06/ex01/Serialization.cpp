/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikkim <minsikkim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:40 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/15 01:34:39 by minsikkim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data::Data() : data(42)
{}

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
