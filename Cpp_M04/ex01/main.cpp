/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:53:52 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:53:53 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
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

/*============================ [Deep Copy Example] ===========================*/
/*
 * NOTE:
 * ======
 * If you want to see the difference between a deep copy and a shallow copy,
 * Just comment the copy constructor from the Dog class,
 * in that situation, the original copy constructor from c++ will be called,
 * and the shallow copy will be performed.
 *
 * Note:
 * ======
 * The original copy constructor from c++ is just performing [memcpy()] function,
 * and it is not creating whole new object, which is a shallow copy.
 * */

//int main() {
//	Dog *dog1 = new Dog();
//
//	std::cout << "\n\n------------------[1]-----------------" << std::endl;
//	dog1->getBrain()->setIdea(0, "I am a dog");
//	std::cout << "Ideas of dog1: " << dog1->getBrain()->getIdea(0) << std::endl;
//
//	std::cout << "------------------[2]-----------------" << std::endl;
//	Dog *dog2 = new Dog(*dog1);
//	std::cout << "\nIdeas of dog2: " << dog2->getBrain()->getIdea(0) << std::endl;
//	std::cout << "------------------[3]-----------------" << std::endl;
//	dog1->getBrain()->setIdea(0, "I am a Wierd dog");
//	std::cout << "Ideas of dog1: " << dog1->getBrain()->getIdea(0) << std::endl;
//	std::cout << "Ideas of dog2: " << dog2->getBrain()->getIdea(0) << std::endl;
//	std::cout << "--------------------------------------" << std::endl;
//
//	delete (dog1);
//	delete (dog2);
//	/*-------------------------------------------------*/
//
//	return 0;
//}

/*============================================================================*/

