/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:27 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:49:32 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

/*=============================[Constructors && Destructors]==================*/
ScavTrap::ScavTrap() {
	std::cout << BOLDGREEN << "Default [ScavTrap constructor] called" << RESET << std::endl;
}

/*----------------------------------------------------*/
ScavTrap::ScavTrap(const std::string &name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << BOLDGREEN << "[ScavTrap constructor] called" << RESET << std::endl;
}
/*----------------------------------------------------*/
ScavTrap::ScavTrap(const ScavTrap &scav) {
	*this = scav;
}

/*----------------------------------------------------*/
ScavTrap::~ScavTrap() {
	std::cout << BOLDRED << "[ScavTrap Destructor] called" << RESET << std::endl;
}

/*===========================[Operators overloading]==========================*/
ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	if (this != &scav) {
		this->name = scav.name;
		this->hitPoints = scav.hitPoints;
		this->energyPoints = scav.energyPoints;
		this->attackDamage = scav.attackDamage;
	}
	return (*this);
}

/*===============================================================================*/
void ScavTrap::beRepaired(unsigned int amount) {
	if (energyPoints >= 0) {
		if ((this->hitPoints + amount) > 100)
			this->hitPoints = 100;
		else {
			this->hitPoints += amount;// Increase hitPoints by the requested amount
			this->energyPoints -= 1; // Decrease energyPoints by 1
		}

		std::cout << BOLDMAGENTA << "ScavTrap [" << this->name << "]"
				  << GREEN << " Has been repaired for [" << amount << "] points\n"
				  << BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
				  << "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
	}
	else
		std::cout << BOLDRED << "ScavTrap [" << this->name << "]"
				  << BOLDRED << " Has no energy points to repair" << RESET << std::endl;
}

/*----------------------------------------------------*/
void ScavTrap::attack(const std::string &target) {
	if (this->energyPoints > 0) {
		if (this->hitPoints > 0) {
			this->energyPoints -= 1;

			std::cout << BOLDMAGENTA << "ScavTrap [" << this->name << "]"
					  << YELLOW << " attacks [" << target << "], causing ["
					  << this->attackDamage << "] points of damage!\n"
					  << BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
					  << "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
		} else
		{
			std::cout << BOLDMAGENTA << "ScavTrap [" << this->name << "]"
					  << BOLDRED << " is dead, can't attack!" << RESET << std::endl;
		}
	}
	else
		std::cout << BOLDMAGENTA << "ScavTrap [" << this->name << "]"
				  << BOLDRED << " Has no energy points to attack" << RESET << std::endl;
}

/*----------------------------------------------------*/
void ScavTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		if (this->hitPoints > amount) {
			this->hitPoints -= amount;

			std::cout << BOLDMAGENTA << "ScavTrap " << this->name
			 << RED << " takes [" << amount << "] points of damage!"
			 << RESET << std::endl;
		} else {
			this->hitPoints = 0;
			std::cout << BOLDRED << " [DIED] !!!" << RESET << std::endl;
		}
	} else {
		std::cout << BOLDMAGENTA << "ScavTrap [" << this->name << "]"
		 << BOLDRED << " is dead, can't take damage any more!" << RESET << std::endl;
	}
}

/*----------------------------------------------------*/
void ScavTrap::guardGate() {
	if (this->hitPoints > 0) {
		std::cout << BOLDMAGENTA << "ScavTrap [" << this->getName() << "]"
		<< YELLOW << " has entered in Gate keeper mode" << RESET << std::endl;
	}
	else
		std::cout << BOLDRED << "ScavTrap [" << this->getName() << "]"
		<< BOLDRED << " is dead" << RESET << std::endl;
}


/*===============================================================================*/