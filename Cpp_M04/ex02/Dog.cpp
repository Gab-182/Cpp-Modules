/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:54:39 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:54:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

/*===============================================================================*/
Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << BOLDGREEN << "[Default Dog constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Dog::Dog(const Dog &copy)  {
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain)); // Calling the Brain copy constructor.
	std::cout << BOLDGREEN << "[Copy Dog constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Dog::~Dog() {
	delete this->brain;
	std::cout << BOLDRED << "[Dog object destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return (*this);
}

/*===============================================================================*/
std::string Dog::getType() const {
	return (this->type);
}

void Dog::makeSound() const {
	std::cout << BOLDYELLOW << "Dog making sounds" << RESET << std::endl;
}

Brain *Dog::getBrain() const {
	return (brain);
}

/*===============================================================================*/
