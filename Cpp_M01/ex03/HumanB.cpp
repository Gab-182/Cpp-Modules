/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:44:11 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:44:12 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"


/*===========================[Constructor && Destructors]=====================*/
//Default constructor:
HumanB::HumanB() {
	std::cout
			<< BOLDGREEN
			<< "Default [HumanB] constructor has been called"
			<< RESET
			<< std::endl;
}
//One argument constructor:
HumanB::HumanB(std::string name) {
	std::cout
	<< BOLDGREEN
	<< "[HumanB] constructor has been called"
	<< RESET
	<< std::endl;

	this->name = name;
}
//Destructor:
HumanB::~HumanB() {
	std::cout
			<< BOLDRED
			<< "[HumanB] destructor has been called"
			<< RESET
			<< std::endl;
}

/*=========================[Getters && Setters]===============================*/
//m_name:
std::string HumanB::getName() {
	return name;
}

void HumanB::setName(std::string name) {
	HumanB::name = name;
}
/*--------------------------------------------*/
//m_weapon:
Weapon* HumanB::getWeapon() {
	return (weapon);
}

void HumanB::setWeapon(Weapon *weapon) {
	this->weapon = weapon;
}

/*=========================[Methods]==========================================*/
void HumanB::attack() {
	std::cout
	<< BOLDMAGENTA
	<< HumanB::getName()
	<< BOLDYELLOW
	<< " attacks with their "
	<< BOLDMAGENTA
	<< HumanB::weapon->getType()
	<< RESET
	<< std::endl;
}


/*============================================================================*/


