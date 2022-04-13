/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:28:10 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/13 22:12:51 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

struct Data
{
	int		data;

public:
	Data();
	Data(const Data &da);
	~Data();
	Data	&operator=(const Data &da);

	int	get_data(void);
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif