/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:51:12 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:51:13 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

#include "WrongAnimal.h"
#include "WrongCat.h"
/*===============================================================================*/
int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	/*-------------------------------------------------*/
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	/*-------------------------------------------------*/
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	/*-------------------------------------------------*/
	delete dog;
	delete cat;
	delete animal;
/*===============================================================================*/
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	/*-------------------------------------------------*/
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	/*-------------------------------------------------*/
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	/*-------------------------------------------------*/
	delete wrongAnimal;
	delete wrongCat;
	/*-------------------------------------------------*/

	return 0;
}

/*===============================================================================*/