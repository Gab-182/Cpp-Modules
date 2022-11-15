/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:51:29 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:51:30 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

/*===============================================================================*/
WrongCat::WrongCat() {
	this->type = "Cat";

	std::cout << BOLDGREEN << "[Default WrongCat constructor] called" << RESET << std::endl;
}

/*-------------------------------------------------------------------*/
WrongCat::WrongCat(const WrongCat &copy) {
	*this = copy;
}

/*-------------------------------------------------------------------*/
WrongCat::~WrongCat() {
	std::cout << BOLDRED << "[WrongCat destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
WrongCat &WrongCat::operator=(const WrongCat &cat) {
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

/*===============================================================================*/
void WrongCat::makeSound() const {
	std::cout << BOLDYELLOW << "Meeawooo comming from the [WrongCat]" << RESET << std::endl;
}

std::string WrongCat::getType() const {
	return (this->type);
}
/*===============================================================================*/
