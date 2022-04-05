/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 19:52:39 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	test(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal	*Animal_array[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			Animal_array[i] = new Dog;
		else
			Animal_array[i] = new Cat;	
	}
	for (int i = 0; i < 100; i++)
	{
		delete Animal_array[i];
	}
}

int main() {
	test();
	system("leaks Animal");
	return 0;
}