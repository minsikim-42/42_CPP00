/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/06 16:09:35 by minsikim         ###   ########.fr       */
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

	Animal	*Animal_array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			Animal_array[i] = new Dog(); // Dog, up cast
		else
			Animal_array[i] = new Cat(); // Cat
	}
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "-------------------\n";
			Animal_array[i]->makeSound(); // Dog
			std::cout << "Dog[" << i << "] : ";
			((Dog *)Animal_array[i])->add_idea("Im Dog"); // down cast
			((Dog *)Animal_array[i])->add_idea("I love my master");
			((Dog *)Animal_array[i])->show_my_ideas();
			std::cout << "-------------------\n";
		}
		else
		{
			std::cout << "-------------------\n";
			Animal_array[i]->makeSound(); // Cat
			std::cout << "Cat[" << i << "] : ";
			((Cat *)Animal_array[i])->add_idea("Im Cat");
			((Cat *)Animal_array[i])->add_idea("Food. Slaves.");
			((Cat *)Animal_array[i])->show_my_ideas();
			std::cout << "-------------------\n";
		}
	}

	for (int i = 0; i < 4; i++)
	{
		delete Animal_array[i];
	}
}

int main() {
	test();
	// system("leaks Animal");
	return 0;
}