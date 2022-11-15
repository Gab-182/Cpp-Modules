/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:54:09 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:54:10 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

/*===============================================================================*/
Animal::Animal() {
	this->type = "Default Animal";

	std::cout << BOLDGREEN << "[Default Animal constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Animal::Animal(const Animal &copy) {
	*this = copy;
}

/*-------------------------------------------------------------------*/
Animal::~Animal() {
	std::cout << BOLDRED << "[Animal destructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

/*===============================================================================*/
