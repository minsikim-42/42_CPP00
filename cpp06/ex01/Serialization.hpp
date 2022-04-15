/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikkim <minsikkim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:28:10 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/15 01:32:55 by minsikkim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

struct Data
{
	int	data;
	Data();
	int	get_data(void);
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif