/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:29:26 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/25 13:55:05 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		A = "HI THIS IS BRAIN"; //?
	std::string*	stringPTR = &A;
	std::string&	stringREF = A;

	std::cout << "address string A  : " << &A << std::endl;
	std::cout << "address stringRTR : " << stringPTR << std::endl;
	std::cout << "address stringREF : " << &stringREF << std::endl;

	std::cout << "string A  : " << A << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return (0);
}
