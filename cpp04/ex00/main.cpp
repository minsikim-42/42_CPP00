/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:50:12 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/04 12:12:37 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int main() {
const Animal* meta = new Animal();
// const Animal* j = new Dog();
const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl; i->makeSound();
//will output the cat sound! j->makeSound();
meta->makeSound();
return 0; }