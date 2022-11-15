/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:19 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:48:20 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

/*===============================================================================*/
int main() {
	ScavTrap scavTrapZik("ZIK");

	std::cout << BOLDYELLOW << scavTrapZik.getName() << "-> HP ->: " << scavTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << scavTrapZik.getEnergyPoints() << "-> Energy Points ->: " << scavTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	/*==========================================================================================================================================*/

	scavTrapZik.attack("WAK");
	std::cout << BOLDYELLOW << scavTrapZik.getName() << "-> HP ->: " << scavTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << scavTrapZik.getEnergyPoints() << "-> Energy Points ->: " << scavTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	/*==========================================================================================================================================*/

	scavTrapZik.takeDamage(20);
	std::cout << BOLDYELLOW << scavTrapZik.getName() << "-> HP ->: " << scavTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << scavTrapZik.getEnergyPoints() << "-> Energy Points ->: " << scavTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	/*==========================================================================================================================================*/

	scavTrapZik.beRepaired(20);
	std::cout << BOLDYELLOW << scavTrapZik.getName() << "-> HP ->: " << scavTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << scavTrapZik.getEnergyPoints() << "-> Energy Points ->: " << scavTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	/*==========================================================================================================================================*/
	scavTrapZik.guardGate();
	/*==========================================================================================================================================*/
	return 0;
}
