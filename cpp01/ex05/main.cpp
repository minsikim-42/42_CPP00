/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:37:17 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 15:25:12 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		Harl;
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 20; i++)
	{
		Harl.complain(arr[i % 4]);
	}
	return (0);
}
