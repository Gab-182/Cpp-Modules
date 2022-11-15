/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:44:42 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:44:43 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"


/*===========================[Constructor && Destructors]=====================*/
//Default constructor:
Weapon::Weapon() {
	std::cout
	<< BOLDGREEN
	<< "Default [Weapon] constructor has been called"
	<< RESET
	<< std::endl;
}
//One argument constructor:
Weapon::Weapon(std::string type) {
	std::cout
	<< BOLDGREEN
	<< "[Weapon] constructor has been called"
	<< RESET
	<< std::endl;

	this->m_type = type;
}
//Destructor:
Weapon::~Weapon() {
	std::cout
	<< BOLDRED
	<< "[Weapon] destructor has been called"
	<< RESET
	<< std::endl;
}

/*=========================[Getters && Setters]===============================*/
std::string &Weapon::getType() {
	return m_type;
}

void Weapon::setType(std::string type) {
	this->m_type = type;
}

/*============================================================================*/