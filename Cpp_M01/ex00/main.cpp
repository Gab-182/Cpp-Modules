/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:51 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:36:52 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main() {
	// Creating new zombies:
	Zombie *zombie1, *zombie2, *zombie3;

	zombie1 = newZombie("Zombie1");
	zombie2 = newZombie("Zombie2");
	zombie3 = newZombie("Zombie3");

	std::cout << "=============================================================" << std::endl;
	// Get zombies names:
	std::cout << "Zombie1 name: " << zombie1->getName() << std::endl;
	std::cout << "Zombie1 name: " << zombie2->getName() << std::endl;
	std::cout << "Zombie1 name: " << zombie3->getName() << std::endl;

	std::cout << "=============================================================" << std::endl;
	// Announcing the zombies:
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();

	std::cout << "=============================================================" << std::endl;
	// Destroying the zombies:
	delete (zombie1);
	delete (zombie2);
	delete (zombie3);

	std::cout << "=============================================================" << std::endl;
	// Creating a random zombie:
	randomChump("Random Zombie1");
	randomChump("Random Zombie2");
	randomChump("Random Zombie3");

	std::cout << "=============================================================" << std::endl;

	return (0);
}