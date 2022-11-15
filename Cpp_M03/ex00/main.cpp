/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:55 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:47:56 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/*===============================================================================*/
int main() {
	ClapTrap clapTrapZik("ZIK");
	ClapTrap clapTrapWak("WAK");

	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	clapTrapZik.attack("WAK");
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	clapTrapWak.takeDamage(5);
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;
	/*==========================================================================================================================================*/

	clapTrapWak.beRepaired(5);
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;
	/*==========================================================================================================================================*/

	clapTrapWak.attack("ZIK");
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	clapTrapZik.takeDamage(5);
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;

	/*==========================================================================================================================================*/

	clapTrapWak.beRepaired(5);
	std::cout << "\n----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getName() << "-> HP ->: " << clapTrapZik.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapZik.getEnergyPoints() << "-> Energy Points ->: " << clapTrapZik.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getName() << "-> HP ->: " << clapTrapWak.getHitPoints() << std::endl;
	std::cout << BOLDYELLOW << clapTrapWak.getEnergyPoints() << "-> Energy Points ->: " << clapTrapWak.getEnergyPoints() << std::endl;
	std::cout << "----------------------------------------------------------------\n" << std::endl;
	/*==========================================================================================================================================*/
	return 0;
}
