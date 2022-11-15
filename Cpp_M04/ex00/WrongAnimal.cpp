/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:51:42 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:51:43 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

/*===============================================================================*/
WrongAnimal::WrongAnimal() {
	this->type = "Default Animal";

	std::cout << BOLDGREEN << "[Default WrongAnimal constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

/*-------------------------------------------------------------------*/
WrongAnimal::~WrongAnimal() {
	std::cout << BOLDRED << "[WrongAnimal destructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

/*===============================================================================*/
std::string WrongAnimal::getType() const {
	return (this->type);
}

/*===============================================================================*/
void WrongAnimal::makeSound() const {
	std::cout << BOLDYELLOW << "WrongAnimal making [sound]" << RESET << std::endl;
}

/*===============================================================================*/
