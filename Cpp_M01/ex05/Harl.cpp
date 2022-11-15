/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:45:21 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:22 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

/*============================================================================*/
void	Harl::debug() {
	std::cout
	<< BOLDYELLOW
	<< "[DEBUG]"
	<< RESET
	<< std::endl;
}
/*---------------------------------------------------------------*/
void	Harl::info() {
	std::cout
	<< BOLDBLUE
	<< "[INFO]"
	<< RESET
	<< std::endl;
}
/*---------------------------------------------------------------*/
void	Harl::warning() {
	std::cout
	<< BOLDMAGENTA
	<< "[WARNING]"
	<< RESET
	<< std::endl;
}
/*---------------------------------------------------------------*/
void	Harl::error() {
	std::cout
	<< BOLDCYAN
	<< "[ERROR]"
	<< RESET
	<< std::endl;
}

/*===============================================================================*/
Harl::Harl() {
	std::cout
	<< BOLDGREEN
	<< "Default [Harl] constructor has been called"
	<< RESET
	<<std::endl;
}
/*---------------------------------------------------------------*/
Harl::~Harl() {
	std::cout
	<< BOLDRED
	<< "Default [Harl] destructor has been called"
	<< RESET
	<<std::endl;
}

/*===============================================================================*/
/**NOTE:
 * =====
 * (*&Harl::info)();
 * means:
 * reference to the pointer to the member function <info()>.
 * */
void	Harl::complain(std::string level) {
	// First convert the string <level> to lower case
	for (int j=0; j<level.length(); j++)
		level[j] = std::tolower(level[j]);
	// Create an array of all the levels
	std::string levelsArray[] = {"debug", "info", "warning", "error"};
	// loop through the array and compare the string <level> to each element
	for (int i = 0; i < 4; i++) {
		if (level == levelsArray[i]) {
			switch (i) {
				case 0:
					funcPtr = &Harl::debug;
					(this->*funcPtr)();
					return;
				case 1:
					funcPtr = &Harl::info;
					(this->*funcPtr)();
					return;
				case 2:
					funcPtr = &Harl::warning;
					(this->*funcPtr)();
					return;
				case 3:
					funcPtr = &Harl::error;
					(this->*funcPtr)();
					return;
			}
		}
	}
	std::cout
	<< BOLDRED
	<< "[UNKNOWN LEVEL]"
	<< RESET
	<< std::endl;
}

/*============================================================================*/