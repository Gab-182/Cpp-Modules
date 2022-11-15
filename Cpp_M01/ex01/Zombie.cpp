/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:41 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:42 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

#include "Zombie.h"


/*==============================[Constructors]=========================*/
Zombie::Zombie() {
	std::cout
			<< BOLDGREEN
			<< "A zombie object has been created by default constructor"
			<< RESET
			<< std::endl;
}

Zombie::Zombie(std::string name) {
	std::cout
			<< BOLDGREEN
			<< "A zombie object has been created by one argument constructor"
			<< RESET
			<< std::endl;

	Name = name;
}

/*============================[Destructors]=============================*/
Zombie::~Zombie() {
	std::cout
			<< RED
			<< "A zombie object has been destroyed"
			<< RESET
			<< std::endl;
}

/*==========================[Setters && Getters]========================*/
std::string Zombie::getName() {
	return (Zombie::Name);
}

void Zombie::setName(std::string name) {
	Zombie::Name = name;
}

/*===============================[Methods]=============================*/
void Zombie::announce(void) {
	std::cout
			<< BOLDBLUE
			<< Zombie::Name
			<< YELLOW
			<< ": BraiiiiiiinnnzzzZ..."
			<< RESET
			<< std::endl;
}
/*=======================================================================*/