/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:41:02 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:41:03 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

/*===========================[Constructor && Destructors]=====================*/
/*
 * Since we passed the m_weapon as a reference in the Class Attributes,
 * so we need to initialize the value for the m_weapon object like that:
 *
 * : m_weapon(wee)
 *	And that is why we can not use the default constructor here.
 *
 * */
HumanA::HumanA(std::string name, Weapon& weapon): m_weapon(weapon) {
	this->m_name = name;
}

HumanA::~HumanA() {
	std::cout
	<< BOLDRED
	<< "[HumanA] destructor has been called"
	<< RESET
	<< std::endl;
}

/*=========================[Getters && Setters]===============================*/
// Setter && Getters for [m_name]:
std::string& HumanA::getName() {
	return (m_name);
}

void HumanA::setName(std::string name) {
	this->m_name = name;
}
/*-------------------------------------------*/
// Setters && Getters for [m_weapon]:
Weapon HumanA::getWeapon() {
	return m_weapon;
}

void HumanA::setWeapon(Weapon& weapon) {
	this->m_weapon = weapon;
}
/*-------------------------------------------*/
void HumanA::attack() {
	std::cout
	<< BOLDMAGENTA
	<< HumanA::getName()
	<< BOLDYELLOW
	<< " attacks with their "
	<< BOLDMAGENTA
	<< this->m_weapon.getType()
	<< RESET
	<< std::endl;
}

/*============================================================================*/


