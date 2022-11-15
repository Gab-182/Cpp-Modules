/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:51 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:52 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde( int N, std::string name ) {
	// Creating and Allocating memory for an array of Zombies objects:
	Zombie *zombie = new Zombie[N];

	// Setting the name of each Zombie object to be same as the parameter (name):
	for (int i=0; i < N; i++) {
		zombie[i].setName(name);
	}
	return (zombie);
}