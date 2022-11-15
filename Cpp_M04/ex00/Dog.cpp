/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:53 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:54 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

/*===============================================================================*/
Dog::Dog() {
	this->type = "Dog";

	std::cout << BOLDGREEN << "[Default Dog constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Dog::Dog(const Dog &copy) {
	*this = copy;
}

/*-------------------------------------------------------------------*/
Dog::~Dog() {
	std::cout << BOLDRED << "[Dog destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog)
		this->type = dog.type;
	return (*this);
}

/*===============================================================================*/
std::string Dog::getType() const {
	return (this->type);
}

/*===============================================================================*/
void Dog::makeSound() const {
	std::cout << BOLDYELLOW << "Woof Woof" << RESET << std::endl;
}

/*===============================================================================*/