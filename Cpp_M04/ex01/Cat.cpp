/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:53:34 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:53:35 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

/*===============================================================================*/
Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << BOLDGREEN << "[Default Cat constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Cat::Cat(const Cat &copy) {
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain)); // Calling the Brain copy constructor.
	std::cout << BOLDGREEN << "[Copy Cat constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Cat::~Cat() {
	delete this->brain;
	std::cout << BOLDRED << "[Cat object destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
		this->brain = cat.brain;
	}
	return (*this);
}

/*===============================================================================*/
std::string Cat::getType() const {
	return (this->type);
}

void Cat::makeSound() const {
	std::cout << BOLDYELLOW << "Cat making sounds" << RESET << std::endl;
}

Brain *Cat::getBrain() const {
	return (brain);
}

/*===============================================================================*/
