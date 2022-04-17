/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:28:10 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/17 10:45:29 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

# define CH 4

struct Data
{
	char	c[CH];
	int		i;
	int		j;
	int		k;
	int		l;
	Data();
	
	char	*get_c(void);
	
	int		get_i(void);
	int		get_j(void);
	int		get_k(void);
	int		get_l(void);
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif