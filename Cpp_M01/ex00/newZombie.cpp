/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:02 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:03 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

/**
 * Zombie* newZombie( std::string name );
 * It creates a zombie, name it, and return it so you can use it outside
 * of the function scope.
 */

Zombie	*newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
/*================================================================================*/