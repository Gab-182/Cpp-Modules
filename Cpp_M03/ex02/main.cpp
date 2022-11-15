/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:10 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:11 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

/*===============================================================================*/
int main() {
	FragTrap fragTrapWak("WAK");

	std::cout << BOLDYELLOW << fragTrapWak.getName() << "-> HP ->: " << fragTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << fragTrapWak.getEnergyPoints() << "-> Energy Points ->: " << fragTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	fragTrapWak.attack("WAK");
	std::cout << BOLDYELLOW << fragTrapWak.getName() << "-> HP ->: " << fragTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << fragTrapWak.getEnergyPoints() << "-> Energy Points ->: " << fragTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	fragTrapWak.takeDamage(30);
	std::cout << BOLDYELLOW << fragTrapWak.getName() << "-> HP ->: " << fragTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << fragTrapWak.getEnergyPoints() << "-> Energy Points ->: " << fragTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	/*==========================================================================================================================================*/

	fragTrapWak.beRepaired(20);
	std::cout << BOLDYELLOW << fragTrapWak.getName() << "-> HP ->: " << fragTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << fragTrapWak.getEnergyPoints() << "-> Energy Points ->: " << fragTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	/*==========================================================================================================================================*/
	fragTrapWak.highFivesGuys();
	/*==========================================================================================================================================*/
	return 0;
}
