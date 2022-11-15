/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:32 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:33 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/*=====================================================================*/
int main() {
	Zombie *zombie;

	// Initializing the Zombie array and allocate memory for it:
	zombie = zombieHorde(5, "Zombie");

	// print the announcement of each Zombie object:
	for (int i=0; i < 5; i++) {
		zombie[i].announce();
	}

	// Delete all the zombies in the array:
	delete [] zombie;
}
/*=====================================================================*/