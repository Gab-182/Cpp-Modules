/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:44 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:47:45 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/*============================================================================*/
ClapTrap::ClapTrap() {
	this->name = "Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;

	std::cout << BOLDGREEN << "Default [ClapTrap constructor] called" << RESET<< std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : hitPoints(10), energyPoints(10), attackDamage(5) {
	this->name = name;

	std::cout << BOLDGREEN << "[ClapTrap constructor] called" << RESET<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap) {
	*this = clap;

	std::cout << BOLDGREEN << "[Copy constructor] called" << RESET<< std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << BOLDRED << "[ClapTrap Destructor] called" << RESET << std::endl;
}

/*============================================================================*/
ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {
	if (this != &clap) {
		this->name = clap.name;
		this->hitPoints = clap.hitPoints;
		this->energyPoints = clap.energyPoints;
		this->attackDamage = clap.attackDamage;
	}
	return (*this);
}

/*============================================================================*/
unsigned int ClapTrap::getHitPoints() const {
	return (this->hitPoints);
}

const std::string &ClapTrap::getName() const {
	return (name);
}

unsigned int ClapTrap::getEnergyPoints() const {
	return (energyPoints);
}

/*============================================================================*/
void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints >= 0) {
		if ((this->hitPoints + amount) > 10)
			this->hitPoints = 10;
		else {
			this->hitPoints += amount;// Increase hitPoints by the requested amount
			this->energyPoints -= 1; // Decrease energyPoints by 1
		}

		std::cout << BOLDMAGENTA << "ClapTrap [" << this->name << "]"
		 << GREEN << " Has been repaired for [" << amount << "] points\n"
		 << BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
		 << "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
	}
	else
		std::cout << BOLDRED << "ClapTrap [" << this->name << "]"
		<< BOLDRED << " Has no energy points to repair" << RESET << std::endl;
}
/*----------------------------------------------------*/
void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints > 0) {
		if (this->hitPoints > 0) {
			this->energyPoints -= 1;

			std::cout << BOLDMAGENTA << "ClapTrap [" << this->name << "]"
			 << YELLOW << " attacks [" << target << "], causing "
			 << this->attackDamage << " points of damage!\n"
			<< BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
			<< "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
		} else
		{
			std::cout << BOLDMAGENTA << "ClapTrap [" << this->name << "]"
			<< BOLDRED << " is dead, can't attack!" << RESET << std::endl;
		}
	}
	else
		std::cout << BOLDMAGENTA << "ClapTrap [" << this->name << "]"
		<< BOLDRED << " Has no energy points to attack" << RESET << std::endl;
}

/*----------------------------------------------------*/
void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		if (this->hitPoints > amount) {
			this->hitPoints -= amount;

			std::cout << BOLDMAGENTA << "ClapTrap " << this->name
			<< RED << " takes [" << amount << "] points of damage!"
			<< RESET << std::endl;
		} else {
			this->hitPoints = 0;
			std::cout << BOLDRED << " [DIED] !!!" << RESET << std::endl;
		}
	} else {
		std::cout << BOLDMAGENTA << "ClapTrap [" << this->name << "]"
		<< BOLDRED << " is dead, can't take damage any more!" << RESET << std::endl;
	}
}

/*============================================================================*/
