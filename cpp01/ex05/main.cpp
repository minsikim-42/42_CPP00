/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:37:17 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 20:41:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen		karen;
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 20; i++)
	{
		karen.complain(arr[i % 4]);
	}
	return (0);
}
