/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:00 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:01 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

/*=============================[Constructors && Destructors]==================*/
FragTrap::FragTrap() {
	std::cout << BOLDGREEN << "Default [FragTrap constructor] called" << RESET << std::endl;
}

/*----------------------------------------------------*/
FragTrap::FragTrap(const std::string &name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << BOLDGREEN << "[FragTrap constructor] called" << RESET << std::endl;
}
/*----------------------------------------------------*/
FragTrap::FragTrap(const FragTrap &frag) {
	*this = frag;
}

/*----------------------------------------------------*/
FragTrap::~FragTrap() {
	std::cout << BOLDRED << "[FragTrap Destructor] called" << RESET << std::endl;
}

/*===========================[Operators overloading]==========================*/
FragTrap &FragTrap::operator=(const FragTrap &frag) {
	if (this != &frag) {
		this->name = frag.name;
		this->hitPoints = frag.hitPoints;
		this->energyPoints = frag.energyPoints;
		this->attackDamage = frag.attackDamage;
	}
	return (*this);
}

/*===============================================================================*/
void FragTrap::beRepaired(unsigned int amount) {
	if (energyPoints >= 0) {
		if ((this->hitPoints + amount) > 100)
			this->hitPoints = 100;
		else {
			this->hitPoints += amount;// Increase hitPoints by the requested amount
			this->energyPoints -= 1; // Decrease energyPoints by 1
		}

		std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
				  << GREEN << " Has been repaired for [" << amount << "] points\n"
				  << BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
				  << "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
	}
	else
		std::cout << BOLDRED << "FragTrap [" << this->name << "]"
				  << BOLDRED << " Has no energy points to repair" << RESET << std::endl;
}

/*----------------------------------------------------*/
void FragTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		if (this->hitPoints > amount) {
			this->hitPoints -= amount;

			std::cout << BOLDMAGENTA << "FragTrap " << this->name
					  << RED << " takes [" << amount << "] points of damage!"
					  << RESET << std::endl;
		} else {
			this->hitPoints = 0;
			std::cout << BOLDRED << " [DIED] !!!" << RESET << std::endl;
		}
	} else {
		std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
				  << BOLDRED << " is dead, can't take damage any more!" << RESET << std::endl;
	}
}

/*----------------------------------------------------*/
void FragTrap::attack(const std::string &target) {
	if (this->energyPoints > 0) {
		if (this->hitPoints > 0) {
			this->energyPoints -= 1;

			std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
					  << YELLOW << " attacks [" << target << "], causing ["
					  << this->attackDamage << "] points of damage!\n"
					  << BOLDCYAN << "#- [" << this->energyPoints << "] energy points\n"
					  << "#- [" << this->hitPoints << "] hit points" << RESET << std::endl;
		} else
		{
			std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
					  << BOLDRED << " is dead, can't attack!" << RESET << std::endl;
		}
	}
	else
		std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
				  << BOLDRED << " Has no energy points to attack" << RESET << std::endl;
}

/*===============================================================================*/
void FragTrap::highFivesGuys() {
	if (this->hitPoints > 0) {
		std::cout << BOLDMAGENTA << "FragTrap [" << this->name << "]"
				  << GREEN << " High fives guys" << RESET << std::endl;
	}
	else
		std::cout << BOLDRED << "FragTrap [" << this->name << "]"
				  << BOLDRED << " Has no hit points to high five" << RESET << std::endl;
}

/*===============================================================================*/