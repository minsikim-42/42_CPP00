/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:04:03 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/12 21:57:36 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::ofstream	fout;
	// std::ifstream	fin;
	std::string		str = "";

	if (argc != 4)
	{
		std::cout << "Error\n";
		return (-1);
	}
	str.c_str();
	std::ifstream fin(argv[1]);
	char	c;
	while (fin.get(c))
	{
		str += c;
	}
	if (c == argv[2][0])
			{
				fin.get(c);
				int	i = 1;
				while(c == argv[i])
				{
					fin.get(c);
				}
			}
	// fin.open(argv[1]);
	// while ((fin >> str) != NULL)
	// {
		std::cout << str << std::endl;
	// }
	return (0);
}