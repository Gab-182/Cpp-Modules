/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:39 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

/*===============================================================================*/
Cat::Cat() {
	this->type = "Cat";

	std::cout << BOLDGREEN << "[Default Cat constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
Cat::Cat(const Cat &copy) {
	*this = copy;
}

/*-------------------------------------------------------------------*/
Cat::~Cat() {
	std::cout << BOLDRED << "[Cat destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

/*===============================================================================*/
void Cat::makeSound() const {
	std::cout << BOLDYELLOW << "Meeawooo" << RESET << std::endl;
}

std::string Cat::getType() const {
	return (this->type);
}
/*===============================================================================*/
