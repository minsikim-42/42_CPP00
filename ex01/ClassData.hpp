/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassData.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:11:04 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/09 16:28:06 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDATA_HPP
# define CLASSDATA_HPP
# define MAX 5
# include <iostream>
# include <string>
# include <iomanip>

class ClassData;

# include "ClassAddress.hpp"

class ClassData
{
	int				idx;
	ClassAddress	address[MAX];

public:
	ClassData();
	~ClassData();
	void	set_index(int i);
	void	set_down_index(void);
	void	set_address(int idx);
	void	print_address(void);
};

#endif
