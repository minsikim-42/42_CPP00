/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:04:03 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/29 22:05:16 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::string		str = "";

	if (argc != 4)
	{
		std::cout << "Error\n";
		return (-1);
	}
	int	size_2 = 0;
	while (argv[2][size_2])
		size_2++;
	int size_3 = 0;
	while (argv[3][size_3])
		size_3++;
	str.c_str();
	std::ifstream fin(argv[1]);
	if (fin.good() != 1)
	{
		std::cout << "error\n";
		return (-1);
	}
	char	c;
	while (fin.get(c))
		str += c;
	fin.close();
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == argv[2][0])
		{
			if (str.compare(i, size_2, argv[2]) == 0)
			{
				str.erase(i, size_2);
				str.insert(i, argv[3]);
				if (size_3 == 0)
					i--;
				else
					i += size_3 - 1;
			}
		}
	}
	std::string		file_name = argv[1];
	file_name += ".replace";
	std::ofstream	fout(file_name);
	fout << str;
	return (0);
}