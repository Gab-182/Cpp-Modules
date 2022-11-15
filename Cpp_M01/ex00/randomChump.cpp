/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:07 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:08 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

/**
 * void randomChump( std::string name );
 * It creates a zombie, name it, and the zombie announces itself.*/

void randomChump( std::string name ) {
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	delete (zombie);
}

/*================================================================================*/