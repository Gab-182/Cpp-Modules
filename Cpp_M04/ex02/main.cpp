/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:54:59 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:55:00 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
//	Animal *meta = new Animal(); // Note that we can not do that,
								// Because you can't create an instance of an abstract class.
	Animal* animal[4];

	for (int i = 0; i < 4; i++) {
		if (i >= 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		animal[i]->getType();
		animal[i]->makeSound();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animal[i];
	}
	std::cout << "--------------------------------------" << std::endl;

	return 0;
}

/*============================================================================*/

